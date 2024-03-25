#!/bin/bash
wget -P /tmp https://github.com/1r2o3b4e5l/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD=/tmp/libgiga.so
