//
// Created by Pierre on 20/12/2024.
//
#include <string>
using namespace std;
#ifndef FIFOSTOCKMGMT_PASSWORDMANAGER_H
#define FIFOSTOCKMGMT_PASSWORDMANAGER_H


using namespace std;

class PasswordManager
{
    string password;
public:
    bool getPassword(const string&);
    void setPassword(string newPassword);
    bool checkPasswordAvailability();
};

#endif //FIFOSTOCKMGMT_PASSWORDMANAGER_H
