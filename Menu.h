//
// Created by Pierre on 20/12/2024.
//
#include<iostream>
#include "Queue.h"
#ifndef FIFOSTOCKMGMT_MENU_H
#define FIFOSTOCKMGMT_MENU_H


class Menu {
public:
void displayMenu();
int getUserChoice();
bool getUserChoice(); // to check if the user made a choice
void displayQueue();
void addStock(Node* input);
void removeStock();
bool authentication();
};


#endif //FIFOSTOCKMGMT_MENU_H
