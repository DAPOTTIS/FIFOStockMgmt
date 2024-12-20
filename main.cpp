#include <iostream>

#include "ClearScreen.h"
#include "Menu.h"

int main() {
    Menu menu;
    system(CLEAR);
    while(!menu.authentication()) {
        cout << "\n";
    }
    do {
        menu.displayMenu();
    }while(!menu.handleUserChoice());


    return 0;
}
