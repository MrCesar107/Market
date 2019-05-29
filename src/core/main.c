#include <stdio.h>
#include <stdlib.h>

// Custom headers
#include "../include/welcome_menu.h"
#include "../include/main_menu.h"
#include "../include/catalogue.h"

int main()
{
  const char* user[30];
  const char* password[30];

  short int user_logged_in;

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
  


  // print_main_menu();
  // print_catalogue();
  //system("CLEAR");
  return 0;
}
