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
    void setPassword();
    bool checkPasswordAvailability();
};

#endif //FIFOSTOCKMGMT_PASSWORDMANAGER_H
