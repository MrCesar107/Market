#include <stdio.h>
#include <stdlib.h>

// Custom headers
#include "../include/welcome_menu.h"
#include "../include/main_menu.h"
#include "../include/catalogue.h"

int main()
{
  system("CLEAR");
  print_welcome_menu();
  print_main_menu();
  print_catalogue();
  system("CLEAR");
  return 0;
}
