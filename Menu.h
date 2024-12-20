#include<iostream>
#include "Queue.h"
using namespace std;
#ifndef FIFOSTOCKMGMT_MENU_H
#define FIFOSTOCKMGMT_MENU_H


class Menu {
public:
void displayMenu();

int getUserChoice();

bool getUserChoice();

void displayQueue();

void addStock(Node* input);

void removeStock();

bool authentication();
};


#endif
