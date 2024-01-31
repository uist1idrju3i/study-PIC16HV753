#include <stdint.h>
#include <stdlib.h>
#include <xc.h>

#include "app/initialize.h"
#include "lib/function.h"
#include "lib/infinite_loop.h"

int main(void) {
  // Initialize
  while (kSuccess != app_initialize()) {
    lib_infinite_loop();
  }

  // Main loop
  while (1) {
  }

  exit(EXIT_SUCCESS);
}
