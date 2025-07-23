# 📂 Basic Linux Commands for HPC

A reference list of essential Linux shell commands useful for High Performance Computing environments.

---

## 📌 Files & Directories

| Command | Description |
|----------------|-------------------------------|
| `ls` | List files in the current directory |
| `ls -l` | Long listing with permissions |
| `cd dir/` | Change directory |
| `pwd` | Print current working directory |
| `mkdir dir/` | Make a new directory |
| `rmdir dir/` | Remove an empty directory |
| `rm file` | Remove a file |
| `rm -r dir/` | Remove directory and contents |
| `cp file1 file2` | Copy file1 to file2 |
| `mv file1 file2` | Rename or move a file |
| `touch file` | Create an empty file |
| `cat file` | Display file contents |
| `less file` | View file contents page by page |
| `nano file` | Open file in Nano editor |
| `vim file` | Open file in Vim editor |

---

## 🔐 Permissions & Ownership

| Command | Description |
|----------------|-------------------------------|
| `chmod +x file` | Make file executable |
| `chmod 755 file` | Set read/write/execute for owner, read/execute for others |
| `chown user:group file` | Change owner and group |

---

## ⚙️ Compilation & Execution

| Command | Description |
|----------------|-------------------------------|
| `gcc file.c -o output` | Compile C file |
| `g++ file.cpp -o output` | Compile C++ file |
| `nvcc file.cu -o output` | Compile CUDA program |
| `./output` | Run the compiled binary |

---

## 🗃️ System Monitoring

| Command | Description |
|----------------|-------------------------------|
| `top` | Real-time CPU/memory usage |
| `htop` | Interactive version of `top` |
| `ps aux` | Show running processes |
| `kill PID` | Kill process by PID |
| `df -h` | Disk usage |
| `du -sh *` | Disk usage of files/folders |

---

## 📡 Cluster & Parallel

| Command | Description |
|----------------|-------------------------------|
| `ssh user@host` | Remote login to HPC node |
| `scp file user@host:/path` | Copy file to remote server |
| `mpicc file.c -o output` | Compile MPI program |
| `mpirun -np 4 ./output` | Run MPI program with 4 processes |
| `srun` | Submit/run job with Slurm |
| `sbatch` | Submit batch job script |
| `qsub` | Submit batch job (PBS) |
| `module load <module>` | Load environment module (e.g., CUDA) |

---

## 📥 File Download & Networking

| Command | Description |
|----------------|-------------------------------|
| `wget URL` | Download file from internet |
| `curl URL` | Transfer data from URL |

---

## 📌 Miscellaneous

| Command | Description |
|----------------|-------------------------------|
| `echo "Hello World"` | Print message |
| `date` | Show current date/time |
| `whoami` | Current username |
| `man command` | Manual for any command |

---

## ✅ Recommended Shortcuts

- Use `Tab` for auto-completion.
- Use `Ctrl + C` to stop a running command.
- Use `Ctrl + Z` to pause a process.
- Use `fg` or `bg` to resume jobs.

---

> **This basic list is enough for you to navigate, manage files, compile programs, and run jobs in an HPC environment.**

