#include "khaos/Languages.h"
#include <stdio.h>

/* Cannot use doctest */
#if LANGUAGE_IS(C)
  printf("Is C\n");
#else
  #error "KHAOS_LANGUAGE_IS(C) should be true !"
#endif
