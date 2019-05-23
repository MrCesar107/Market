#include <stdio.h>

// Custom headers
#include "../core/menu.h"
#include "../core/gotoxy.h"

void print_main_menu() {
  const char welcome_title[] = "Bienvenido usuario";

  system("CLEAR");
  menu(welcome_title);
  gotoxy(5, 7);
  printf("Seleccione la opción deseada");
  gotoxy(5, 10);
  printf("1.- Ver catálogo");
  gotoxy(5, 12);
  printf("2.- Ver carrito");
  gotoxy(5, 14);
  printf("3.- Agregar producto al catálogo");
  gotoxy(5, 16);
  printf("4.- Eliminar producto del catálogo");
  gotoxy(5, 18);
  printf("5.- Salir");
  getchar();
}