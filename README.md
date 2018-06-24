pyslam
======

`pyslam` provides very basic bindings for the `ORB_SLAM2` library, currently only in RGBD mode.

You will probably want to build with `-DCMAKE_INSTALL_PREFIX=/usr` to ensure Python bindings get installed in the right directory.

See [this gist](https://gist.github.com/trehansiddharth/06b384a5f39ab16eb1f80a724fb3e0b4) for an example of how to use `pyslam`.

OpenCV SWIG bindings, distributed alongside `pyslam`, are developed by Renato Garcia and sourced from [this repository](https://github.com/renatoGarcia/opencv-swig) for convenience.
