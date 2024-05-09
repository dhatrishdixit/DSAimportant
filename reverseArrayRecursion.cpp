#include <iostream>

using namespace std ;

  void reverseArr(int i,int arr[],int n ){
  	if(i==n/2){
  		return ;
  	}
  	swap(arr[i],arr[n-i-1]);
  	reverseArr(i+1,arr,n);
  }

int main(){

	int arr[5]={1,2,3,4,5};
	int n = 5;

	reverseArr(0,arr,n);

	cout <<*arr<<" "<<sizeof(arr);
}