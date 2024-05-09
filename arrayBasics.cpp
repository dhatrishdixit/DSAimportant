#include <iostream>

using namespace std;

void printArr(int arr[],int size){
    for(int i=0;i<size;i++){
    	cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
	int first[10]={1,2};
    
    printArr(first,10);

    // for initialising this method can be used 

    int second[10]={0};
    
    printArr(second,10);

} 