#!/bin/zsh

rm -r Debug
mkdir -p build 
cd build
cmake .. -DCMAKE_BUILD_TYPE=Debug -DCMAKE_INSTALL_PREFIX=.. -DBUILD_SHARED_LIBS=ON
make
make install
cd ..
mkdir Debug
mv bin Debug/
mv lib Debug/
mv plugins Debug/
