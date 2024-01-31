#include "infinite_loop.h"

__at(0x00E) void lib_infinite_loop(void) {
  while (1) {
    // Wait for the watchdog timer to reset the device.
  }
}
