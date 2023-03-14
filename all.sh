#!/bin/bash

mkdir -p build
pushd build
cmake ..
make
./app
popd
