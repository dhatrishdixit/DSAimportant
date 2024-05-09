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
        if(next != NULL){
            delete next ;
        
        }
    }
};

class Stack {
public:
    Node* head;
    Node* tail;
    int size;

    Stack() {
        head = NULL;
        tail = NULL;
        size = 0;
    }

    void push(int d) {
        Node* temp = new Node(d);
        if (head == NULL) {
            head = temp;
            tail = temp;
        }
        else {
            tail->next = temp;
            tail = temp;
        }
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

        if (head == NULL) {
            tail = NULL;
            size = 0;
        }
    }

    int peek() {
        if (head != NULL) {
            return tail->data;
        }
        else {
            cout << "Stack underflow" << endl;
            return -1; // or any other suitable value
        }
    }

    int len() {
        return size;
    }
};

int main() {
    Stack st;
    st.push(5);
    cout << st.peek() << endl;
    cout << st.peek() << " Length is: " << st.len() << endl;
    st.push(10);
    cout << st.peek() << " Length is: " << st.len() << endl;
    st.pop();
    cout << st.len() << endl;
    st.pop();
    cout << st.len() << endl;

    return 0;
}

