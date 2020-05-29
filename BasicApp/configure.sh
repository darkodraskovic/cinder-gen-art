#!/bin/sh

cd proj/cmake/
mkdir -p build
cd build/
cmake .. -DCMAKE_EXPORT_COMPILE_COMMANDS=1 -DCMAKE_BUILD_TYPE=Release # -DCMAKE_BUILD_TYPE=Debug
