#include <iostream>

#include "ClearScreen.h"
#include "Menu.h"

int main() {
    Menu menu;
    system(CLEAR);
    menu.authentication();

    menu.displayMenu();
    while(!menu.handleUserChoice()) {
        menu.displayMenu();
    }

    return 0;
}
