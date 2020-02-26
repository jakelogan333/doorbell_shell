rmdir /Q /S build
mkdir build
cd build

cmake ..
cmake --build .

cd ..