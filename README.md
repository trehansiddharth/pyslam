pyslam
======

`pyslam` provides very basic bindings for the `ORB_SLAM2` library, currently only in RGBD mode.

Installation
------------

First, the `CMakeLists.txt` in `ORB_SLAM2` will have to be patched to provide an install rule. This patch is in `orbslam_changes.diff`. After applying this patch, install `ORB_SLAM2` to a directory in your `$LD_LIBRARY_PATH` (the default install location will probably be fine).

Next, build `pyslam`. You will probably want to build it with `-DCMAKE_INSTALL_PREFIX=/usr` to ensure Python bindings get installed in the right directory.

Usage
-----

See [this gist](https://gist.github.com/trehansiddharth/06b384a5f39ab16eb1f80a724fb3e0b4) for an example of how to use `pyslam`.

Credits
-------

OpenCV SWIG bindings, distributed alongside `pyslam`, are developed by Renato Garcia and sourced from [this repository](https://github.com/renatoGarcia/opencv-swig) for convenience.
