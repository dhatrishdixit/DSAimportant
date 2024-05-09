#include <iostream>

using namespace std ;

class Node{

    public : 
    int data ;
    Node* prev ;
    Node* next ;

    Node(int data){
         this -> data = data ;
         this -> prev = NULL;
         this -> next = NULL;
    }

    ~Node(){
       int value = this->data;
       if(this->next != NULL){
          delete next ;
          next = NULL;
       }
       cout <<" memory cleared for node with value :"<<value<<endl; 
    }
};



int getLength(Node* &head){
    Node* temp = head ;
    int len =0;
    while(temp != NULL){
        len++;
        temp = temp ->next;
    }
    return len ;
}
void insertAtHead(Node* &head,Node* &tail, int d){
    
    Node* temp = new Node(d);
if(head==NULL){
        head = temp ; 
        tail = temp ;
        
    }
    else{
    temp->next = head ;
    head -> prev = temp ;
    head = temp;  }
}

void insertAtTail(Node*&head ,Node* &tail, int d){
    Node* temp = new Node(d);
   if(tail == NULL){
    tail = temp;
    head = temp ;
   // return;
   }
  else{  
    temp-> prev = tail;
    tail->next = temp;
    tail = temp; }
}
void insertAtAnyPosition(Node* &head,Node* &tail,int position ,int d){
    if(position == 1){
        insertAtHead(head,tail,d);
        return ;
    }
    Node* toInsert = new Node(d);
    Node* temp = head ;
    int ps = 1;
    while (ps<position -1){
        temp= temp->next ;
        ps++;
    }
    if(temp -> next == NULL){
        insertAtTail(head,tail,d);
        return ;
    }
    // Node* nextNode = temp->next;
    // nextNode->prev = toInsert ; 
    toInsert->next = temp->next;
    temp->next->prev = toInsert;
   
    temp->next = toInsert;
    toInsert->prev = temp;

}
// now this is correct 
void deleteNode(Node* &head,Node* &tail, int position){
     if(position == 1){
        Node* temp = head;
        head = head -> next;
        temp -> next -> prev = NULL;
        temp -> next =NULL;
        delete temp;
     }
     else{
        //deleting any middle o last element 
        Node* curr = head ;
        Node* previous = NULL;
        int cp =1;
        while (cp<position){
            previous = curr;
            curr =curr -> next ;
            cp++;
        }
        if(curr-> next == NULL){
            previous->next = NULL;
            tail = previous ;
            curr -> prev = NULL;
            curr -> next = NULL;
            delete curr;
            return ;
        }
        previous -> next = curr -> next ;
        curr -> next -> prev = previous ;
        curr -> prev = NULL;
        curr -> next = NULL;
        delete curr; 

     }
}

// void deleteNode(Node* &head, Node* &tail, int position) {
//     if (head == nullptr) {
//         // List is empty, nothing to delete
//         return;
//     }

//     if (position == 1) {
//         Node* temp = head;
//         head = head->next;
//         if (head != nullptr) {
//             head->prev = nullptr;
//         } else {
//             // The list becomes empty after deletion, update the tail accordingly
//             tail = nullptr;
//         }
//         delete temp;
//     } else {
//         // Deleting any middle or last element
//         Node* curr = head;
//         int cp = 1;
//         while (curr != nullptr && cp < position) {
//             curr = curr->next;
//             cp++;
//         }

//         if (curr == nullptr) {
//             // Invalid position, node not found
//             return;
//         }

//         if (curr == tail) {
//             // Deleting the last element, update the tail
//             tail = curr->prev;
//         }

//         if (curr->prev != nullptr) {
//             curr->prev->next = curr->next;
//         }
//         if (curr->next != nullptr) {
//             curr->next->prev = curr->prev;
//         }
//         curr->prev = nullptr;
//         curr->next = nullptr;
//         delete curr;
//     }
// }

// void print(Node* &head){
//     Node* temp = head;
//     while(temp != NULL){
//         cout<<temp->data<<" ";
//         temp = temp -> next ;
//     }
//     cout <<endl;

// }
void print(Node* &head){
    
     Node* temp = head;
     while(temp!= NULL){
       
       cout<< temp -> data <<" ";
       temp = temp->next;
         
     }
     cout<<endl;


}
int main(){

     Node* node1 = new Node(3);
     Node* head = node1;
     Node* tail = node1;
    //  print(head);
    //  cout<<getLength(head)<<endl;
     insertAtHead(head,tail,11);
    //  print(head);
     insertAtTail(head,tail,6);
     print(head);
     insertAtAnyPosition(head,tail,2,4);
     print(head);

    // Node* head = NULL;
    // insertAtHead(head,11);
    // print(head);
    insertAtAnyPosition(head,tail,5,5);
    print(head);
    cout<<" head :"<<head -> data <<" tail: "<<tail->data<<endl;
    deleteNode(head,tail,5);
    print(head);
    cout<<" head :"<<head -> data <<" tail: "<<tail->data<<endl;
     

}