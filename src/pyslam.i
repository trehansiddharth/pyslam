%module slam

%include <opencv.i>
%cv_instantiate_all_defaults

%include <std_string.i>

%{
    #include "pyslam.hpp"
%}

%include "pyslam.hpp"
