#ifndef QUEUE_H
#define QUEUE_H

#include <string>

struct Node {
    std::string dateIn, dateOut, category, name, id, quantity, price;
    Node* next;
};

class Queue {
public:
    Node* front,* rear;
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
