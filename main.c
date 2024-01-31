#include <stdint.h>
#include <stdlib.h>
#include <xc.h>

#include "lib/infinite_loop.h"

int main(void) {
  while (1) {
  }
  lib_infinite_loop();
  exit(EXIT_SUCCESS);
}
