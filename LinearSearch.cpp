#include<iostream>

using namespace std;

bool linearSearch(int arr[], int size, int key ){
	// bool s = false;
	int index = 0;
	for(int i=0;i<size;i++){
		if(key==arr[i]){
			// s = true;
			// break;
			return 1;
		}
	}
	// return s;
	return 0;
}

int main(){
	int arr[10]={1,2,3,4,5,6,7,8,9};
	//key is the element to search for 
    int key;
    cin >>key;
    bool found = linearSearch(arr,10,key);

if(found){
	cout<<"key is present";
}else{
	cout<<"key is absent";
}

}