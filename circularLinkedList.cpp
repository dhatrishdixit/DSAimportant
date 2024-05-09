#include <iostream>

using namespace std ;

class Node{
    
    public:
    int data ;
    Node* next ;

    Node(int data){
        this -> data = data ;
        this -> next = NULL;
    }
    ~Node(){
        int value = this -> data;
        if(this -> next != NULL){
            delete this->next ;
            this -> next = NULL;
        }
    }

};

void insertNode(Node* &tail ,int d , int nodeValue){
   Node* temp = new Node(d);
   
    if(tail == NULL){
        
        temp -> next = temp ;
        tail= temp;
        return ;
    }
    // in case there are elements present 

    Node* curr = tail;
    // Node* temp = new Node(d);

    while(curr->data != nodeValue){
        curr = curr -> next ;
    }

    temp -> next = curr -> next;
    curr -> next = temp ;
}

void print(Node* &tail){
      Node* temp = tail ;
    do{
         cout << temp -> data <<" ";
         temp = temp -> next ;
      }while( temp != tail) ;
      cout <<endl;
}

void deleteNode(Node* &tail, int nodeValue){

    if(tail == NULL){
        return ;
    }
    Node* previous =tail;
    Node* curr = previous -> next ;
    
    while(curr-> data != nodeValue){
        previous = curr ;
        curr = curr-> next ;
    }
    
     previous -> next = curr -> next ;
    //consider if tail is deleted
    if(curr == tail){
        tail = previous ;
  
    } 
    
    curr -> next = NULL;
    delete curr ;

}

int main(){
    Node* tail = NULL;
    insertNode(tail ,5,0);
    print(tail);
    insertNode(tail,6,5);
    print(tail);
    insertNode(tail,7,5);
    print(tail);
    deleteNode(tail,5);
    print(tail);
    cout << tail -> data <<endl;
     

}