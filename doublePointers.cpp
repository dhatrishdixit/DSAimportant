#include <iostream>

using namespace std ;

int main (){
    int i = 100;
    int *ptr = &i;
    int **ptr2 = &ptr;

    cout<<" values of all variables :"<<i<<" "<<*ptr<<" "<<" "<<*ptr2<<endl;

    cout<<" address of all variables: "<<&i<<" "<<ptr<<" "<<&ptr<<" "<<ptr2<<" "<<&ptr2<<endl;

    cout<<" value of variable i: "<<i<<" "<<*ptr<<" "<<*(*ptr2)<<endl; 
}