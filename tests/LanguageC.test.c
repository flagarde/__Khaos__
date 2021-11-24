#include "khaos/Languages.h"

/* Cannot use doctest */
#if KHAOS_LANGUAGE_IS(c)

#else
  #error "KHAOS_LANGUAGE_IS(c) should be true !"
#endif
