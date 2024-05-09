#include <iostream>

using namespace std ;

class Node{
     public:
     int data ;
     Node* next;
    
    Node(int data){
        this -> data = data ;
        this -> next = NULL;
    }

    ~Node(){
        int value = this->data;
        // to free our memory 
        if(this->next != NULL){
            delete next;
           

        }
        cout<<"memory is freed for the node with data "<<value<<endl;
    }
};

void insertionAtHead(Node* &head,int d){
    
    Node* temp = new Node(d);
    temp -> next = head ;
    head = temp;

}

void insertionAtTail(Node* &tail,int d){

    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertionAtMiddle(Node* &head,Node* &tail,int d,int position){
    //insert at start 
    if(position == 1){
        insertionAtHead(head,d);
        return ;
        // this return is important here as it will stop the the function once element is inserted at head 
    }
    Node* temp = head ;
    
    int i =1;
    while(i<position-1){
        
        temp = temp->next;
        i++;

    }
    //to update the tail of our linked list 
    if(temp->next == NULL){
        insertionAtTail(tail,d);
        return;
    }

    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

//   void deleteUsingPosition(Node* &head,Node* &tail,int position){
//      Node* temp = head ;
//     if(position==1){
//         Node* temp = head;
//         head = head ->next ;
     
//         return ;
        
//     }
     

//       int ps = 1;
//       while(ps < position-1){
//         temp = temp->next;
//         ps++;
//       }
      
//       Node* del = temp-> next;
//       temp->next = del->next;
//     if(del->next ==NULL){
//        tail = temp ;
//     }
//   }

void deleteNode(Node* &head,int position){

    //deleting first or starting element
    if(position == 1){
        Node* temp = head ;
        head = head->next ;
        // memory free , done for starting node 
        delete temp ;
    }else{

    }
}

void print(Node* &head){
    
     Node* temp = head;
     while(temp!= NULL){
       
       cout<< temp -> data <<" ";
       temp = temp->next;
         
     }
     cout<<endl;


}

int main(){
     
     Node* node1 = new Node(10);
     cout << node1->data <<endl;

     Node* head = node1;
     Node* tail = node1;
    //  insertionAtHead(head,9);
    //  print(head);
     insertionAtTail(tail,9);
     print(head);
     insertionAtMiddle(head,tail,3,2);
     print(head);
     insertionAtMiddle(head,tail,2,2);
     print(head);
     insertionAtMiddle(head,tail,2,1);
     print(head); 

     insertionAtMiddle(head,tail,13,6);
     print(head);
     cout<<"head: "<<head->data <<endl;
     cout<<"tail: "<<tail->data<<endl; // here this is the issue as tail is not updated so we have to update it also 
    //  deleteUsingPosition(head,tail,1);
     print(head);
     cout<<"head: "<<head->data<<endl;
     cout<<"tail: "<<tail->data<<endl;
     deleteNode(head,1);
     print(head);
     cout<<"head: "<<head->data<<endl;
     cout<<"tail: "<<tail->data<<endl;
    
} 