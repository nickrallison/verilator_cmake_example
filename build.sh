#!/bin/sh

# if any command fails the script will stop
set -e

if [ ! -d "build" ]; then
    mkdir build
fi
cd build
cmake -GNinja .. > /dev/null
ninja > /dev/null

./Vmux2
