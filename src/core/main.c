#include <stdio.h>
#include <stdlib.h>

// Custom headers
#include "getch.h";
#include "../include/welcome_menu.h"
#include "../include/main_menu.h"
#include "../include/catalogue.h"

int main()
{
  const char* user[30];
  const char* password[30];

  short int user_logged_in;

  short int main_x = 45;
  short int main_y = 10;

  short int main_menu_option;


  do
  {
    system("CLEAR");
    print_welcome_menu();
    gotoxy(7, 12);
    scanf("%s", user);
    gotoxy(7, 19);
    scanf("%s", password);
    user_logged_in = check_user_password(user, password);
  } while(!user_logged_in);
  


  print_main_menu();
  gotoxy(main_x, main_y);
  short int option;

  do
  {
    option = getch();

    if(option == 115)
    {
      main_y += 2;
      gotoxy(main_x, main_y);
      printf("%d", main_y);

      if (main_y >= 18)
        main_y = 8;
    }

    if (option == 119)
    {
      main_y -= 2;
      gotoxy(main_x, main_y);
      printf("%d", main_y);

      if (main_y <= 10)
        main_y = 20;
    }
  } while(main_menu_option == NULL);
  
  // print_catalogue();
  //system("CLEAR");
  return 0;
}
