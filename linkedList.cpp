#include<bits/stdc++.h>

using namespace std ;

class Node{

     public :
     int data ;
     Node* next ;
     
     //  parameterized constructor 
     Node(int data){
        this-> data = data ;
        this-> next = NULL;
     }


};

void insertAtHead(Node* &head,int d){

    Node *temp = new Node(d);
    temp -> next = head ;
    head = temp ;

}

void insertAtTail(Node* &tail ,int d){

     Node* temp = new Node(d);
     tail->next = temp;
     tail = temp ;

}

// void insertAtTail(Node* &head, int d) {
//     Node* temp = new Node(d);
    
//     if (head == NULL) {
//         head = temp;
//         return;
//     }
    
//     Node* tail = head;
//     while (tail->next != NULL) {
//         tail = tail->next;
//     }
    
//     tail->next = temp;
// }

void print(Node* &head){

      // as we dont want to change head node now therefore we do operation on different node 

      Node* temp = head ;
      while(temp != NULL){
        cout << temp ->data <<" ";
        temp = temp-> next ;
      }

}

int main(){

    Node* node1 = new Node(12);
    Node* tail = node1;
    // cout << node1 -> data <<endl;
    // cout << node1 -> next <<endl;
    // insertAtHead(node1,10);
    insertAtTail(tail,9);
    print(node1);

}


