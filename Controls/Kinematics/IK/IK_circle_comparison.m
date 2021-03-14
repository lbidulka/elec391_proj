


% Create a rigid body tree object with joints
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

% Loop through trajectory to trace the circle
% USE TEST IK
for i = 1:count
    % Solve for the configuration satisfying the desired end effector
    % position
    point = points(i,1:2);
    testSol = Inv_Kin(L1,L2,point);
    % Store the configuration
    testqs(i,:) = testSol;
end

% Inv Kinematics
function output = Inv_Kin(l1, l2, cart)
    x = cart(1);
    y = cart(2);

    q1 = abs(acos((x^2 + y^2 - l1^2 - l2^2)/(2*l1*l2)));

    gamma = atan(y/x);
    beta = atan((l2*sin(q1))/(l1 + l2*cos(q1)));

    q0 = gamma - beta;
    output = [q0; q1];
end

% Fwd Kinematics
function output = Fwd_Kin(l1, l2, angles)

q0 = angles(1);
q1 = angles(2);

x = l1*cos(q0) + l2*cos(q0+q1);
y = l1*sin(q0) + l2*sin(q0+q1);

output = [x;y]

end
