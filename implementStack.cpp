#include <iostream>
#include <stack>
using namespace std ;

class Stack{
      //properties 

      public :
         int *arr;
         int top ;
         int size ;

    Stack(int size){
        this -> size= size ;
        this -> top = -1;
        arr = new int[size];
    }

    void push(int element){
        if(top == size-1){
            cout<<"stack overflow"<<endl;
            return ;
        }
        ++top;
        arr[top] = element ;
    }
    

    void pop(){
        if(top == -1){
            cout<<"stack underflow"<<endl;
        }else if(top>=0){
            --top;

        }
    }


    int peek(){
        if(top ==-1){
            cout<<"stack underflow"<<endl;
        }else if(top>=0 && top<size){
            return arr[top];
        }
    }

    bool isEmpty(){
        if(top>=0){
            return false;
        }else if(top == -1){
            return true ;
        }
    }

};


int main(){

    Stack st(5);
    st.push(5);
    cout<<st.peek()<<endl;

    st.push(10);
    st.push(10);
    st.push(10);
    st.push(10);
    st.push(10);
    st.push(10);
    st.push(10);
    st.push(10);
    
    cout<<st.peek()<<endl;
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    
    cout<<st.peek()<<endl;

    cout << st.isEmpty()<<endl;

}