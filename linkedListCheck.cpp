
#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;
    
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node* &head, int d) {
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &head, int d) {
    Node* temp = new Node(d);
    
    if (head == NULL) {
        head = temp;
        return;
    }
    
    Node* tail = head;
    while (tail->next != NULL) {
        tail = tail->next;
    }
    
    tail->next = temp;
}

void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* node1 = new Node(12);
    insertAtTail(node1,9);
    
    print(node1);
    
    return 0;
}
