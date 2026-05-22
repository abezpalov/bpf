#include "vmlinux.h"
#include <bpf/bpf_helpers.h>

SEC("tracepoint/syscalls/sys_enter_execve")
int handle_execve(void *ctx) {
    bpf_printk("Exec called!\n");
  return 0;
}

char LICENSE[] SEC("license") = "GPL";
