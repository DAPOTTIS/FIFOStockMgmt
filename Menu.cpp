#include <iostream>
#include "Menu.h"
#include "FileHandler.h"
#include "PasswordManager.h"
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
if (input == NULL) {
    cout<<"Invalid,Please try again"<<endl;
    return;
}
    stockQueue.enqueue(input);
    cout<<"Item added to stock successfully"<<endl;

FileHandler fileHandler;
    fileHandler.save(&stockQueue);
    cout<<"Item has been saved to the file"<<endl;
}

void Menu::removeStock() {
    if (stockQueue.isEmpty()) {
        cout<<"The stock is empty"<<endl;
        return;
    }
    Node* removedItem = stockQueue.dequeue();
    if (removedItem != nullptr) {
        std::cout << "item removed successfully: "
                  << removedItem->name << std::endl; // Adjust to match Node's fields
        delete removedItem; // Free memory
    } else {
        std::cout << "Failed to remove item." << std::endl;
    }

    // Save the updated queue to the file
    FileHandler fileHandler;
    fileHandler.saveToFile(&stockQueue);
    std::cout << "Item has been saved to the file." << std::endl;
}


bool Menu:: authentication(){
  PasswordManager passwordManger;
    string enterPass;

    if (!passwordManger.checkPasswordAvailability()) {
        cout<<"There is not a stored password,please set a new password."<<endl;
        passwordManger.setPassword("");
        return true;
    }
    cout<<"Please enter your password:"<<endl;
    cin.ignore();
    getline(cin, enterPass);
    if (passwordManger.getPassword(enterPass)) {
        cout<<"Success!!"<<endl;
        return true;
    }
    else {
        cout<<"Failed,Please try again."<<endl;
        return false;
    }
}
