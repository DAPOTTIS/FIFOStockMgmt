#include "Menu.h"
using namespace std;
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
    cout << "Please enter an option : "<<endl;
    cin>>choice;
    while (choice < 1 || choice > 6) {
        cout << "Invalid,Please enter another choice between 1 and 6:";
        cin>>choice;
    }
return choice;
}

void Menu::displayQueue() {
    cout <<"Displaying the current stock in queue :"<<endl;
    //n3mel implement hena ba2 men el queue

}

void Menu::addStock(Node *input) {
    cout<<

}

void Menu::removeStock() {

}

bool Menu:: authentication(){
    string password;
    cout << "Please enter password : ";
    cin >> password;

}