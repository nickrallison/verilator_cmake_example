#!/bin/sh

mkdir build
cd build
cmake -GNinja ..
ninja
cd ..
./build/Vmux2
