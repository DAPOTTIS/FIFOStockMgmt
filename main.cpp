#include <iostream>

#include "ClearScreen.h"
#include "Menu.h"

int main() {
    Menu menu;
    system(CLEAR);
    bool trueUser;
check:
   while(menu.authentication()){
       trueUser =true;
     menu.displayMenu();
       while(!menu.handleUserChoice()) {
           menu.displayMenu();
       }
   }
while(!trueUser){
        goto check;
   }

    return 0;
}
