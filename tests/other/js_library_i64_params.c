#include <assert.h>
#include <stdio.h>

int jscall(uint64_t arg);

int main() {
  int rtn = jscall(42);
  printf("%d\n", rtn);
  assert(rtn == 84);
  return 0;
}

