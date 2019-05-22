#include <stdio.h>

// Custom headers
#include "menu.h"
#include "gotoxy.h"

// Funcion que pinta la interfaz de los menus
void menu (char title_screen[100]) 
{
  int x, y = 0;

  for (y = 0; y < HEIGHT; y++) 
  {
    for (x = 0; x < WIDTH; x++) 
    {
      if (y == 0 || y == HEIGHT - 1 || x == 0 || x == WIDTH - 1) 
      {
        printf("*");
      } else 
      {
        printf(" ");
      }
    }

    printf("\n");
  }

  gotoxy((WIDTH / 2) - 10, 4); // gotoxy(x, y)
  printf("%s\n", title_screen);
}