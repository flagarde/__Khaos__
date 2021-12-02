#include "khaos/Language.h"
#include <stdio.h>

int main() {
/* Cannot use doctest */
#if LANGUAGE_IS(C)
  printf("Is C\n");
#else
#error "KHAOS_LANGUAGE_IS(C) should be true !"
#endif
}
