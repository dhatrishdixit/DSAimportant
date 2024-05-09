#include <iostream>

using namespace std ;

class Node{
    
    public:
    int data ;
    Node* next ;

    Node(int value){
        this -> data = value ;
        next = NULL;
    }
    // ~Node(){
    //     int value = this -> data ;
    //     if(this->next != NULL){
    //         delete next ;
    //         next = NULL;
    //     }

    //     cout << "memory is freed for data :"<<data <<endl;
    // }
     
    ~Node() {
        cout << "Memory is freed for data: " << data << endl;
        if(next != NULL){
            delete next ;
        
        }
    }
};

class Stack{

    public:
     Node* head ;
     Node* tail ;
     int size;

     Stack(){
       head = NULL;
       tail = NULL;
       size = 0;
     }

     void push(int d){
        Node* temp = new Node(d);
        if(head == NULL){
            head = temp ;
            tail = temp ;
            size++;
        }
        else{
            tail = tail ->next ;
            tail = temp ;
            size++;
          
            //  tail->next = temp;
            //  tail = temp;
        }
     }

    //  void pop(){

    //     if(head == NULL){
    //         cout<<"stack underflow"<<endl;
    //         return ;
    //     }
      
    //     Node* temp2 = head ;
    //     head = head ->next ;
    //     // if(head->next ==NULL){
    //     //     head = NULL;
    //     //     size =0 ;
    //     //     return ;
    //     // }
    //     temp2 -> next = NULL;
    //     delete temp2;
    //     // temp2 = NULL;
    //     size--;

    //  }

   void pop() {
    if (head == NULL) {
        cout << "stack underflow" << endl;
        return;
    }

    Node* temp = head;
    head = head->next;
    delete temp;
    size--;

    // If the stack becomes empty after popping
    if (head == NULL) {
        tail = NULL;
        size = 0;
    }
    else if (head->next == NULL) {
        tail = head;
    }
}



     int peek(){
        if(head != NULL){
            return tail -> data ;
        }else{
            cout<<"stack underflow"<<endl;
        }
     }
     int len(){
        return size;
     }
    //  int len(){
    //      int len = 0;
    //      Node* temp = head ;
    //      while(temp != NULL){
    //         ++len;
    //         temp = temp -> next ;
    //      }  
    //      return len;

    //  }
};

int main(){
     Stack st;
     st.push(5);
     cout<<st.peek()<<endl;
     cout<<st.peek()<<" length is :"<<st.len()<<endl;
     st.push(10);
     st.push(11);
     cout<<st.peek()<<" length: "<<st.len()<<endl;
    //  cout<<st.peek()<<" length is :"<<st.len()<<endl;
    // cout <<st.len()<<endl;
     st.pop();
     cout<<st.len()<<endl;
     st.pop();
     cout<<st.len()<<endl;
    //  st.pop();
    //  st.pop();
     
    //  cout<<st.peek()<<endl;
}