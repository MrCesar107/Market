#include <stdio.h>
#include <stdlib.h>

// Custom headers
#include "../core/menu.h"
#include "../core/gotoxy.h"

// Custom constants
#define BOX_WIDTH         30
#define BOX_HEIGHT         2

// Horizontal lines
void hline(const int x1, const int x2, const int y)
{
  int i;
  for(i = x1; i <= x2; i++)
  {
    gotoxy(i, y);
    printf("*");
  }
}

// Vertical lines
void vline(const int y1, const int y2, const int x)
{
  int i;
  for(i = y1; i <= y2; i++)
  {
    gotoxy(x,i);
    printf("*");
  }
}

void draw_box(const int x1, const int y1, const int x2, const int y2) {
  // Printing corners
  gotoxy(x2,y1);
  printf("*");
  gotoxy(x1,y2);
  printf("*");
  gotoxy(x2,y2);
  printf("*");
  gotoxy(x1,y1);
  printf("*");

  // Printing lines
  hline(x1+1,x2-1,y1);
  hline(x1+1,x2-1,y2);
  vline(y1+1,y2-1,x1);
  vline(y1+1,y2-1,x2);
}

void print_welcome_menu() 
{
  const char welcome_title[] = "Bienvenido a Market";
  
  menu(welcome_title);
  gotoxy(5, 7);
  printf("Por favor escriba su usuario y contraseña.");
  gotoxy(5, 10);
  printf("Usuario");
  draw_box(5, 11, (5 + BOX_WIDTH), (11 + BOX_HEIGHT));
  gotoxy(5, 17);
  printf("Contraseña");
  draw_box(5, 18, (5 + BOX_WIDTH), (18 + BOX_HEIGHT));
  getchar();
}