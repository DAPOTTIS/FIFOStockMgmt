#include <iostream>

#include "ClearScreen.h"
#include "Menu.h"

int main() {
    Menu menu;
    system(CLEAR);

   while( menu.authentication()){
       menu.displayMenu();
       while(!menu.handleUserChoice()) {
           menu.displayMenu();
       }
   }
   if(!menu.authentication()){
       menu.authentication();
   }

    return 0;
}
