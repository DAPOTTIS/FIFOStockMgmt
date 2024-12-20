#include <iostream>
#include "ClearScreen.h"
#include "Menu.h"
#include <limits>
#include "PasswordManager.h"

using namespace std;

void Menu::displayMenu() {
    cout << "\tMAIN MENU" << endl
         << "__________________________" << endl
         << "ADD STOCK       [1]" << endl
         << "VIEW STOCK      [2]" << endl
         << "DELETE STOCK    [3]" << endl
         << "EDIT PASSWORD   [4]" << endl
         << "EXIT            [5]" << endl;
}

int Menu::getUserChoice() {
    int choice;
    while (true) {
        cout << "Please enter a number between 1 and 6: ";
        cin >> choice;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<ptrdiff_t>::max(), '\n');
            cout << "Invalid. Please enter a number between 1 and 6." << endl;
        } else if (choice < 1 || choice > 6) {
            cout << "Invalid. Please enter a number between 1 and 6." << endl;
        } else {
            return choice;
        }
    }
}

bool Menu::handleUserChoice() {
    int choice = getUserChoice();
    Node* input = nullptr;
    string error;
    bool exit = false;
    switch (choice) {
        case 1:
            input = new Node;
            cout << "Enter the ID: ";
            cin >> input->id;
            cout << "Enter the name: ";
            cin.ignore();
            getline(cin, input->name);
            cout << "Enter the category: ";
            getline(cin, input->category);
            cout << "Enter the quantity: ";
            cin >> input->quantity;
            cout << "Enter the price: ";
            cin >> input->price;
            cout << "Enter the date in: ";
            cin.ignore();
            getline(cin, input->dateIn);
            cout << "Enter the date out: ";
            getline(cin, input->dateOut);
            addStock(input);
            break;
        case 2:
            displayQueue();
            cin.ignore();
            cout << "Press any key to continue" << endl;
            getchar();
            break;
        case 3:
            removeStock();
            cout << "\nItem first in stock has been removed.\nPlease press any key to continue" << endl;
            cin.ignore();
            getchar();
            break;
        case 4:
            passwordManager.setPassword();
            break;
        case 5:
            fileHandler.saveToFile(&stockQueue);
            return true;
        default:
            error = "Invalid, Please try again\n";
            break;
    }
    system(CLEAR);
    if(!error.empty())
        cout << error;
    return exit;
}

void Menu::displayQueue() {
    stockQueue.display();
}


void Menu::addStock(Node* input) {
    if (input == nullptr) {
        cout << "Invalid, Please try again" << endl;
        return;
    }

    stockQueue.enqueue(input);
    cout << "Item added to stock successfully" << endl;
}

void Menu::removeStock() {
    if (stockQueue.isEmpty()) {
        cout << "The stock queue is empty" << endl;
        return;
    }

    stockQueue.dequeue();
    cout << "Item removed successfully: " << endl;
}

bool Menu::authentication() {
    string enterPass;

    if (!passwordManager.checkPasswordAvailability()) {
        cout << "There is no stored password. Please set a new password." << endl;
        passwordManager.setPassword();
        return true;
    }


    cout << "Please enter your password:" << endl;
//    cin.ignore(); heya bent el lazina de
    getline(cin, enterPass);


    if (passwordManager.getPassword(enterPass)) {
        cout << "Success!" << endl;
        return true;
    } else {
        cout << "Failed. Please try again." << endl;
        return false;
    }
}