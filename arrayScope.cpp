#include<iostream>

using namespace std ;

void update(int arr[],int size){
	arr[0]=120;
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
}


// direct changes will be made to array as parameters passed through
// function is address of first element of the array 
int main() {
    int arr[4]={
    	1,2,3,4
    };

    update(arr,4);
}