#include <iostream>
using namespace std;

class Queue {
    struct Node {
        int data;
        Node* next;
    };
    
    Node* front;
    Node* rear;
    
public:
    Queue() {
        front = rear = NULL;
    }

    void enqueue(int data) {
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = NULL;

        if (rear == NULL) {
            front = rear = newNode;
            return;
        }

        rear->next = newNode;
        rear = newNode;
    }

    void dequeue() {
        if (front == NULL) {
            cout << "Queue is Empty" << endl;
            return;
        }

        Node* temp = front;
        cout << "Dequeue: " << front->data << endl;
        front = front->next;

        if (front == NULL) {
            rear = NULL;
        }

        delete temp;
    }

    void empty() {
        if (front == NULL) {
            cout << "Queue is Empty" << endl;
        } else {
            cout << "Queue is not Empty" << endl;
        }
    }

    void display() {
        if (front == NULL) {
            cout << "Queue is Empty" << endl;
            return;
        }

        Node* temp = front;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Queue q;
    cout<<" ....queue wih linklist... "<< endl;
    
    cout<<" enqueue values are:"<< endl;
    q.enqueue(10);
    q.display();
    
    q.enqueue(20);
    q.display();
    
    q.enqueue(30);
    q.display();
    
    cout<<" ======================="<< endl;
    q.dequeue();
    cout<<" list after dequeue :"<< endl;
    q.display();
     cout<<" ======================="<< endl;
    q.empty();
    
    return 0;
}