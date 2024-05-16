#include "pico/stdlib.h"
#include <print>
#include <stdio.h>

int main() {
  setup_default_uart();
  printf("Hello, world!\n");
  return 0;
}
