#include<iostream>

using namespace std;

int BinarySearch(int arr[],int size,int key){
	int start = 0;
	int end = (size-1)/2;
	int mid = (start+end)/2;
	while(start<=end){
		if(arr[mid]==key){
			return mid;
		}
		else if(arr[mid]>key){
			end=mid-1;
		}else{
           start = mid +1;
		}
		mid = start+(end-start)/2;
	}
	return -1;
}

int main(){
	int arr[6]={1,2,3,4,5,6};
	int key = 7;
	cout<<BinarySearch(arr,6,7);
}