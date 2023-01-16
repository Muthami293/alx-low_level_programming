#!/bin/bash
wget -P /tmp/ https://github.com/JeremyWarui/alx-low_level_programming/blob/master/0x18-dynamic_libraries/unrandom.so
export LD_PRELOAD=/tmp/unrandom.so
