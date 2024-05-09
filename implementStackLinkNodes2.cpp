#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        this->data = value;
        next = NULL;
    }

    ~Node() {
        cout << "Memory is freed for data: " << data << endl;
    }
};

class Stack {
public:
    Node* head;
    int size;

    Stack() {
        head = NULL;
        size = 0;
    }

    void push(int d) {
        Node* temp = new Node(d);
        temp->next = head;
        head = temp;
        size++;
    }

    void pop() {
        if (head == NULL) {
            cout << "Stack underflow" << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
        size--;
    }

    int peek() {
        if (head != NULL) {
            return head->data;
        } else {
            cout << "Stack underflow" << endl;
            return -1; // Return a default value or throw an exception to indicate underflow
        }
    }

    int len() {
        return size;
    }
};

int main() {
    Stack st;
    st.push(5);
    cout << st.peek() << " length is: " << st.len() << endl;
    st.push(10);
    cout << st.peek() << endl;
    st.pop();
    st.pop();
    cout << st.peek() << endl;

    return 0;
}
