#include <stdio.h>

// Custom headers
#include "gotoxy.h"

// Function gotoxy sets the prompt cursor in a specific x,y position
void gotoxy(const int x, const int y) {
  printf("\033[%d;%dH", (x), (y));
}

