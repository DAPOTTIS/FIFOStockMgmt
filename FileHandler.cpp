#include "FileHandler.h"

#include <sstream>

string name = "stock.csv";

void FileHandler::saveToFile(Queue* stock) {
    ofstream output(name);
    if(output.is_open()) {
        Node* curr = stock->front;
        while(curr != nullptr) {
            output << curr->id << "," << curr->name << "," << curr->category << "," << curr->quantity << "," << curr->price << "," << curr->dateIn << "," << curr->dateOut << endl;
            curr = curr->next;
        }
    }
}


Queue FileHandler::loadFromFile() {
    ifstream input(name, ios::app);
    Queue stock;
    string line;
    while(getline(input, line)) {
        Node *node = new Node();
        stringstream ss(line);
        string field;
        getline(ss, field, ',');
        node->id = stoi(field);
        getline(ss, field, ',');
        node->name = field;
        getline(ss, field, ',');
        node->category = field;
        getline(ss, field, ',');
        node->quantity = stoi(field);
        getline(ss, field, ',');
        node->price = stof(field);
        getline(ss, field, ',');
        node->dateIn = field;
        getline(ss, field, ',');
        node->dateOut = field;
        stock.enqueue(node);
    }
    return stock;
}

void FileHandler::setPassword(string) {
}
