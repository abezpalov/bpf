#include "exec.skel.h"

int main(void) {
  struct exec *skel = exec__open();
  exec__load(skel);
  exec__attach(skel);

  for (;;) {}
  return 0;
}
