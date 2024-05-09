#include <iostream>

using namespace std ;


int main(){
    
    int size;
    

    cout<<"enter number of values you want to store :" ;
    cin >>size;
    
    int *ptr = new int[size];

    cout<<"enter entries in array :"<<endl;
    for(int i=0;i<size;i++){
        cin>>ptr[i];
    }

    cout<<"value stored in array are :"<<endl;
        for(int i=0;i<size;i++){
        cout<<ptr[i];
    }

    return 0;
}