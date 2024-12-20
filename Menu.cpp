//
// Created by Pierre on 20/12/2024.
//
#include "Menu.h"

void Menu::displayMenu() {
    cout << "\tMAIN MENU" << endl << "__________________________" <<
         endl << "ADD STOCK       [1]" << endl <<
         "VIEW STOCK      [2]" << endl <<
         "EDIT STOCK      [3]" << endl <<
         "DELETE STOCK    [4]" << endl <<
         "EDIT PASSWORD   [5]" << endl <<
         "EXIT            [6]" << endl;
}

int Menu::getUserChoice() {
    int choice;
    cin>>choice;

}

void Menu::displayQueue() {

}

void Menu::addStock(Node *input) {

}

void Menu::removeStock() {

}

bool authentication(){

}