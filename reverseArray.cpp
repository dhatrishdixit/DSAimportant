#include <iostream>

using namespace std;

void reverseArray(int arr[],int size){
    int b ;
	for(int i=0;i<size/2;i++ ){
		int b = arr[i];
	    arr[i]= arr[size-i-1];
	    arr[size-i-1] = b;
	}

}

void reverseArray2(int arr[],int size){
    int start =0 ;
    int end = size-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        
        start++;
        end--;

    }

}

void printArray(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}	
	cout<<endl;
}

int main() {
	int arr[5]={
		1,2,3,4,5
	};
	printArray(arr,5);
	reverseArray(arr,5);
	printArray(arr,5);
    reverseArray2(arr,5);
    printArray(arr,5);

}