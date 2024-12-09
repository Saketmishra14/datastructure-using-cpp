#include<iostream>
#include<climits> 
using namespace std;

// Implementation of the queue data structure using a linked list
class Node {
public:
    int data;
    Node* next;

    // Constructor to initialize node
    Node(int new_data) {
        this->data = new_data;
        this->next = nullptr;
    }
};

class Queue {
public:
    Node* front;
    Node* rear;

    // Constructor to initialize queue
    Queue() {
        front = nullptr;
        rear = nullptr;
    }

    // Check if the queue is empty
    bool isEmpty() {
        return (front == nullptr);  
    }

    // Enqueue a new data element into the queue
    void enqueue(int new_data) {
        Node* new_node = new Node(new_data);  

        if (this->isEmpty()) {
            front = rear = new_node;
        } else {
            
            rear->next = new_node;
            rear = new_node;
        }
    }

    // Dequeue an element from the front of the queue
    void dequeue() {
        if (this->isEmpty()) {
            cout << "Queue Underflow" << endl; 
            return;
        }

        
        Node* temp = front;
        front = front->next;

        
        if (front == nullptr)
            rear = nullptr;
        delete temp;
    }

    // Get the front element of the queue
    int getFront() {
        if (this->isEmpty()) {
            cout << "Queue is empty" << endl;  
            return INT_MIN;  
        }
        return front->data;  
    }

    // Get the rear element of the queue
    int getRear() {
        if (this->isEmpty()) {
            cout << "Queue is empty" << endl;  
            return INT_MIN;  
        }
        return rear->data;  
    }
};

int main() {
    Queue q;

   q.enqueue(100);
   q.enqueue(20);
   q.enqueue(2);
   q.enqueue(4);
   q.dequeue();
   cout<<q.getFront()<<endl;
   cout<<q.getRear();
   

    return 0;
}
