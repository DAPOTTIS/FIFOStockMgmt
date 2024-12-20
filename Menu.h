#include<iostream>
#include "Queue.h"
#include "FileHandler.h"
using namespace std;
#ifndef FIFOSTOCKMGMT_MENU_H
#define FIFOSTOCKMGMT_MENU_H


class Menu {

public:
    Queue stockQueue;
    FileHandler fileHandler;
    void displayMenu();
    int getUserChoice();
    bool handleUserChoice();
    void displayQueue();
    void addStock(Node* input);
    void removeStock();
    bool authentication();
    Menu() {
        stockQueue = fileHandler.loadFromFile();
    }
};


#endif
