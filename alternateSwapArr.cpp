#include<iostream>

using namespace std;

void alternate(int arr[],int size){
    for(int i=0;i<size/2;i++){
        swap(arr[2*i],arr[2*i+1]);
    }
}

void print(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout << endl ;
}

int main(){
    int arr[5]={
        1,2,3,4,5
    };
    alternate(arr,5);
    print(arr,5);
    
}