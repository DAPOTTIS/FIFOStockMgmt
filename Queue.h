#ifndef QUEUE_H
#define QUEUE_H

#include <string>

struct Node {
    int id, quantity;
    std::string dateIn, dateOut, category, name;
    float price;
    Node* next;
};

class Queue {
    Node* front,* rear;

public:
    void enqueue(Node *node);

    void dequeue();
    void display();
    Node* peek();
    bool isEmpty();
    /*  initializing front and rear to nullptr  */
    Queue(Node *front = nullptr, Node *rear = nullptr) {
        this->front = front;
        this->rear = rear;
    }

};

#endif
