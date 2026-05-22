
sudo apt install clang
sudo apt install linux-headers-$(uname -r)
sudo apt install libbpf-dev

clang -02 -target bpf -c bpf_program.c -o bpf_program.o
