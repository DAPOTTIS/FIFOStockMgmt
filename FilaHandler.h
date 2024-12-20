//
// Created by Pierre on 20/12/2024.
//
#include <iostream>
#include <string>
#include "Queue.h"
using namespace std;
#ifndef FIFOSTOCKMGMT_FILAHANDLER_H
#define FIFOSTOCKMGMT_FILAHANDLER_H


class FilaHandler {
    void saveToFile(Node* node);
    void updateFile();
    void setPassword(string);
};


#endif //FIFOSTOCKMGMT_FILAHANDLER_H
