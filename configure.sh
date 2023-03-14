#!/bin/bash

mkdir -p build
pushd build
cmake -DGLFW_BUILD_DOCS=OFF ..
popd

