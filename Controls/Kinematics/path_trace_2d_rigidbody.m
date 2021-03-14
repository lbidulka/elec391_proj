
% Create a rigid body tree object with joings
robot = rigidBodyTree('DataFormat','column','MaxNumBodies',3);

% Specify arm lengths for the arm
L1 = 0.3;
L2 = 0.3;

% Add 'link1' body with 'joint1' joint
body = rigidBody('link1');
joint = rigidBodyJoint('joint1', 'revolute');
setFixedTransform(joint,trvec2tform([0 0 0]));
joint.JointAxis = [0 0 1];
body.Joint = joint;
addBody(robot, body, 'base');

% Add 'link2' body with 'joint2' joint
body = rigidBody('link2');
joint = rigidBodyJoint('joint2','revolute');
setFixedTransform(joint, trvec2tform([L1,0,0]));
joint.JointAxis = [0 0 1];
body.Joint = joint;
addBody(robot, body, 'link1');

% Add 'tool' end effector awith 'fix1' fixed joint
body = rigidBody('tool');
joint = rigidBodyJoint('fix1','fixed');
setFixedTransform(joint, trvec2tform([L2, 0, 0]));
body.Joint = joint;
addBody(robot, body, 'link2');

% Show the details of the robot, to verify
showdetails(robot)

% Define the trajectory, a circle (r = 0.15) over 10sec
t = (0:0.2:10)'; % Time
count = length(t);
center = [0.3 0.1 0];
radius = 0.15;
theta = t*(2*pi/t(end));
points = center + radius*[cos(theta) sin(theta) zeros(size(theta))];

% Create inverse kinematics solver
q0 = homeConfiguration(robot);
ndof = length(q0);
qs = zeros(count, ndof);

% We only care about the xy componenets for end-effector pose
% so non-zero for 4th and 5th elements
ik = inverseKinematics('RigidBodyTree', robot);
weights = [0, 0, 0, 1, 1, 0];
endEffector = 'tool';

% Loop through trajectory to trace the circle
qInitial = q0; % Use home configuration as the initial guess
for i = 1:count
    % Solve for the configuration satisfying the desired end effector
    % position
    point = points(i,:);
    qSol = ik(endEffector,trvec2tform(point),weights,qInitial);
    % Store the configuration
    qs(i,:) = qSol;
    % Start from prior solution
    qInitial = qSol;
end

% Animate the solution
figure
show(robot,qs(1,:)');
view(2)
ax = gca;
%ax.Projection = 'orthographic';
hold on
plot(points(:,1),points(:,2),'k')
axis([-0.1 0.7 -0.3 0.5])

% Lock animation to 15fps
framesPerSecond = 15;
r = rateControl(framesPerSecond);
for j = 1:2 
    for i = 1:count
        show(robot,qs(i,:)','PreservePlot',false);
        drawnow
        waitfor(r);
    end
end

