#include <iostream>
#include "Menu.h"
#include "FileHandler.h"
#include "PasswordManager.h"

using namespace std;

void Menu::displayMenu() {
    cout << "\tMAIN MENU" << endl
         << "__________________________" << endl
         << "ADD STOCK       [1]" << endl
         << "VIEW STOCK      [2]" << endl
         << "EDIT STOCK      [3]" << endl
         << "DELETE STOCK    [4]" << endl
         << "EDIT PASSWORD   [5]" << endl
         << "EXIT            [6]" << endl;
}

int Menu::getUserChoice() {
    int choice;
    cout << "Please enter an option : " << endl;
    cin >> choice;
    while (choice < 1 || choice > 6) {
        cout << "Invalid, Please enter another choice between 1 and 6: ";
        cin >> choice;
    }
    return choice;
}

void Menu::displayQueue() {
    //from Queue file

    }


void Menu::addStock(Node* input) {
    if (input == nullptr) {
        cout << "Invalid, Please try again" << endl;
        return;
    }
    stockQueue.enqueue(input);
    cout << "Item added to stock successfully" << endl;

    FileHandler fileHandler;
    fileHandler.save(&stockQueue);
    cout << "Item has been saved to the file" << endl;
}

void Menu::removeStock() {
    FileHandler fileHandler;
    Queue stockQueue = fileHandler.loadFromFile();

    if (stockQueue.isEmpty()) {
        cout << "The stock queue is empty" << endl;
        return;
    }

    Node* removedItem = stockQueue.dequeue();
    if (removedItem != nullptr) {
        cout << "Item removed successfully: " << removedItem->name << endl;
        delete removedItem;
    } else {
        cout << "Failed to remove item." << endl;
    }

    fileHandler.save(&stockQueue);
    cout << "stock has been saved to the file" << endl;
}

bool Menu::authentication() {
    PasswordManager passwordManager;
    string enterPass;

    if (!passwordManager.checkPasswordAvailability()) {
        cout << "There is no stored password, please set a new password." << endl;
        passwordManager.setPassword("");
        return true;
    }

    cout << "Please enter your password:" << endl;
    cin.ignore();
    getline(cin, enterPass);

    if (passwordManager.getPassword(enterPass)) {
        cout << "Success!!" << endl;
        return true;
    } else {
        cout << "Failed, Please try again." << endl;
        return false;
    }
}
