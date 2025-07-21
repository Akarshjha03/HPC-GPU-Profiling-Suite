# HPC-GPU-Profiling-Suite

A curated collection of programs demonstrating core concepts in **High Performance Computing (HPC)** — including parallel algorithms, GPU acceleration with CUDA, and performance profiling using industry-standard tools.

---

## 📌 What is HPC?

**High Performance Computing (HPC)** is the practice of using supercomputers and parallel processing techniques to solve complex computational problems faster than traditional machines can handle. It enables large-scale simulations, scientific computing, big data analysis, and advanced machine learning workloads.

---

## ⚡ Why Do We Need HPC?

Modern challenges — climate modeling, bioinformatics, autonomous systems, deep learning — demand extreme processing power and scalability. HPC makes it possible to:
- Perform trillions of operations per second.
- Run compute-heavy tasks efficiently.
- Reduce execution time for research and production workloads.
- Optimize algorithms for CPU and GPU architectures.

---

## 🛠️ Popular HPC Tools

Below are widely used HPC tools and frameworks:
- **MPI (Message Passing Interface)** — standard for distributed memory parallelism.
- **OpenMP** — shared memory parallel programming.
- **CUDA** — NVIDIA’s platform for GPU parallel computing.
- **Gprof** — GNU profiler for runtime performance analysis.
- **Intel VTune Profiler** — advanced performance profiling tool.
- **NVIDIA Nsight/Profiler** — GPU code analysis and debugging.
- **Slurm, PBS** — workload managers for clusters and supercomputers.

---

## 📂 Program List

This repository currently includes:

1. **Basic Linux Commands**
   - Collection of fundamental shell commands for working in HPC environments.

2. **Concurrent Quick Sort (C++)**
   - Quick Sort implemented using divide-and-conquer logic with concurrency.

3. **Cluster Execution Time Analysis**
   - Program to run tasks on an unloaded cluster; includes node variation and time measurement with result plots.

4. **Gprof Task Distribution**
   - Profiling program to analyze function call distribution and execution bottlenecks using Gprof.

5. **Intel VTune Performance Analyzer**
   - Setup and analysis for performance tuning with Intel VTune Profiler.

6. **NVIDIA Profilers**
   - Profiling and debugging of GPU tasks using NVIDIA Nsight and Nsight Compute.

7. **GPU Load Distribution (CUDA)**
   - Demonstrates basic GPU load balancing with CUDA kernels.

8. **CUDA Hello World**
   - Minimal example to print from a GPU thread.

9. **CUDA Array Addition**
   - Parallel addition of arrays to showcase GPU parallelism.

---

## 🎯 Why I Worked on These Programs

These programs were developed to:
- Strengthen my understanding of parallel computing fundamentals.
- Explore performance tuning techniques on both CPU and GPU.
- Learn real-world tools used by HPC engineers and researchers.
- Build practical skills for research and industry applications.

---

## 📊 Results & Performance Plots

Where applicable, I have included:
- Profiling screenshots and outputs from Gprof, VTune, and Nsight.
- Plots visualizing execution time vs. number of nodes or threads.
- Comparative CPU vs. GPU performance data.

---

## 🔭 Future Work

Planned additions:
- Add MPI-based distributed programs.
- Implement more parallel algorithms (Merge Sort, Matrix Multiplication, Reduction).
- Run benchmarks on multiple hardware configurations.
- Include more advanced CUDA kernels.
- Expand analysis with more profiling case studies.

---

## 🤝 Contributing

Suggestions, improvements, or new parallel programs are welcome!  
Please open an Issue or submit a Pull Request.

---

## 📚 References

- [NVIDIA CUDA Toolkit](https://developer.nvidia.com/cuda-toolkit)
- [Gprof Documentation](https://sourceware.org/binutils/docs/gprof/)
- [Intel VTune Profiler](https://www.intel.com/content/www/us/en/developer/tools/oneapi/vtune-profiler.html)
- [MPI Forum](https://www.mpi-forum.org/)
- [OpenMP Official](https://www.openmp.org/)
- [HPC University](https://hpcuniversity.org/)

---

## 📜 License

This project is licensed under the **MIT License** — feel free to use, modify, and share!

---

> **⭐ Star this repo if you find it helpful.** Happy computing!
