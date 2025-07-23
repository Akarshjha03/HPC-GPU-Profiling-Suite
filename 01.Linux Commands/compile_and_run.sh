#!/bin/bash

# compile_and_run.sh
# Compile and run a simple C++ or CUDA program.

echo "⚙️ Compiling C++ quicksort.cpp..."
g++ ../02_quicksort_cpp/quicksort.cpp -o quicksort

echo "🚀 Running quicksort..."
./quicksort

echo "⚙️ Compiling CUDA hello_world.cu..."
nvcc ../08_cuda_hello_world/hello_world.cu -o hello_world

echo "🚀 Running CUDA hello world..."
./hello_world

echo "✅ All done!"

# How to run

chmod +x compile_and_run.sh
./compile_and_run.sh
