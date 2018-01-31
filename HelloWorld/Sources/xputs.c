#include <stdint.h>
#include "/tp/xph3sei/xph3sei214/TP_SoC/SimpleApplication/Headers/Private/XPuts.h"

extern uint32_t TTY_DEVICE;

void xputs (char * s)
{
  volatile char * tty_port = (volatile char *) TTY_DEVICE;

  for (int32_t i = 0; s[i] != '\0'; i += 1)
  {
    *tty_port = s[i];
  }
}
