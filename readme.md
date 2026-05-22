
sudo apt install clang
sudo apt install linux-headers-$(uname -r)
sudo apt install libbpf-dev
sudo apt install linux-tools-common linux-tools-generic linux-tools-$(uname -r)
sudo apt install llvm
sudo apt install libbpf-dev
sudo apt install libelf-dev
sudo apt install build-essential

clang -O2 -target bpf -c exec.bpf.c -o exec.bpf.o
bpftool gen skeleton exec.bpf.o name exec > exec.skel.h
clang exec.c -lbpf -o exec
sudo ./exec
