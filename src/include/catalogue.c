#include <stdio.h>
#include <string.h>

// Custom headers

#include "../core/menu.h"
#include "../core/gotoxy.h"

void print_text(char title[30], char text[100]) 
{
  int i;
  int x, y = 0;

  for (i = 0; i < strlen(text); i++) 
  {
    x++;

    if (x >= 52)
    {
      y++;
      x = 0;
    }

    gotoxy(5, 7);
    printf("%s", title);
    gotoxy(x + 5, y + 8);
    printf("%c", text[i]);
  }
}

void print_catalogue() 
{
  char title_test[] = "Producto 1:";

  char text_test[] = "Agrega la lavasecadora LG Signature 12 kg blanca WD12WTS6\
  a la habitacion de lavado de tu hogar y con ella, preparate para disfrutar de\
  optimizacion ideal de tu tiempo y por supuesto esfuerzo en cada proceso de\
  limpieza de tus prendas.";

  const char welcome_title[] = "Catálogo de productos";

  system("CLEAR");
  menu(welcome_title);
  print_text(title_test, text_test);
  getchar();
}