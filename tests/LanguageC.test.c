#include "khaos/Languages.h"

/* Cannot use doctest */
#if KHAOS_LANGUAGE_IS(C)

#else
  #error "KHAOS_LANGUAGE_IS(C) should be true !"
#endif
