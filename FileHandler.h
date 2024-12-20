#ifndef FIFOSTOCKMGMT_FILAHANDLER_H
#define FIFOSTOCKMGMT_FILAHANDLER_H
#include <iostream>
#include <string>
#include <fstream>
#include "Queue.h"
using namespace std;

class FileHandler {
public:
    void saveToFile(Queue*);
    Queue loadFromFile();
    void setPassword(string);
};


#endif //FIFOSTOCKMGMT_FILAHANDLER_H
