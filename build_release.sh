#!/bin/sh

rm -r Release
mkdir -p build 
cd build
cmake .. -DCMAKE_BUILD_TYPE=Release -DIS_DEBUG=0 -DCMAKE_INSTALL_PREFIX=.. -DBUILD_SHARED_LIBS=ON
make
make install
cd ..
mkdir Release
mv bin Release/
mv lib Release/
mv plugins Release/
