
function roboplot(L1,L2,qs)

    persistent robot
    
    if isempty(robot)
        % Create a rigid body tree object with joings
        robot = rigidBodyTree('DataFormat','column','MaxNumBodies',3);

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
        
        figure
    end
    
    show(robot,qs);  
    view([-37.5 70])
    drawnow;
end