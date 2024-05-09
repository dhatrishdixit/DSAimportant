#include <stack>
#include<iostream>

using namespace std ;

int main(){

    // stack<int> s ;
    // s.push(2);
    // s.push(3);

    // cout<<s.top()<<endl;

    // cout<<" size of stack is :"<<s.size()<<endl;
    // s.pop();
    // s.pop();

    // if(s.empty()){
    //     cout <<" stack is empty"<<endl;
    // }else{
    //     cout << s.top()<<endl;
    // }
    


    // tumhara ek concept wrong tha ki stack mein pop mein first element nikalta hai jabki last element nikalta hai ,
    // kyunki LIFO = Last In First Out 
    stack<int> s2 ;
    s2.push(4);
    s2.push(5);
    s2.pop();
    cout<<s2.top()<<endl;

   

}