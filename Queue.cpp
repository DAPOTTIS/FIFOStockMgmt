#include <iostream>
#include "Queue.h"

/*   passing in an already filled in node (item)   */
void Queue::enqueue(Node* node) {
    node->next = nullptr;
    if(isEmpty()) {
        front = rear = node;
    } else {
        rear->next = node;
        rear = node;
    }
}

void Queue::dequeue() {
    if(isEmpty()) {
        std::cout << "No items in stock.";
        return;
    }
    if(front == rear) {
        Node* last = front;
        front = rear = nullptr;
        delete last;
    }
    else {
        Node* temp = front;
        front = front->next;
        delete temp;
    }
}

void Queue::display() {
    if(isEmpty())
        std::cout << "No items in stock.";
    else {
        Node* curr = front;
        while(curr != nullptr) {
            std::cout << "ID: " << curr->id << std::endl;
            std::cout << "Name: " << curr->name << std::endl;
            std::cout << "Category: " << curr->category << std::endl;
            std::cout << "Quantity: " << curr->quantity << std::endl;
            std::cout << "Price: " << curr->price << std::endl;
            std::cout << "Date In: " << curr->dateIn << std::endl;
            std::cout << "Date Out: " << curr->dateOut << std::endl;
            curr = curr->next;
        }
    }
}

Node* Queue::peek() {
    if(!isEmpty()) {
        return front;
    }
    return nullptr;
}

bool Queue::isEmpty() {
    return front == nullptr;
}
