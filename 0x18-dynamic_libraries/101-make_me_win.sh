#!/bin/bash
wget -qLP /tmp https://github.com/djimrangarleita/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libgm.so
export LD_PRELOAD=/tmp/libgm.so
