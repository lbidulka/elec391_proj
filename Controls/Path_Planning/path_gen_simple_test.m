
path_gen()

function output = path_gen()

    % Define the trajectory, a circle (r = 0.15) over 10sec
    t = (0:0.2:10)'; % Time
    count = length(t);
    center = [0.3 0.1 0];
    radius = 0.15;
    theta = t*(2*pi/t(end));
    
    path_points = zeros(length(t),3);

    for i = 1:size(theta)
        path_points(i,:) = center + radius*[cos(theta(i)) sin(theta(i)) 0];
    end
    
    output = path_points;
end
