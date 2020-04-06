#!/bin/sh

cd /media/darko/depot/Radovi/AppDev/Cinder/BasicApp/proj/cmake/
mkdir -p build
cd build/
cmake .. -DCMAKE_EXPORT_COMPILE_COMMANDS=1

cd ../../../
gtags --gtagslabel=ctags
