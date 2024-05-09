#include <iostream>

using namespace std;

bool isPresent(int arr[][4],int i,int j,int target){
	for(int row=0;row<i;row++){
		for(int column =0;column<j;column++){
			if(arr[row][column]==target){
				return true;
			}
		}
	}
	return false;
}
// number of columns should be specified in case of 2d array functions

int main(){
	int arr[3][4];
     // i -> row , j -> column 
	int n ;
	cin >> n ;
	
	for(int i =0;i<3;i++){
		for(int j =0;j<4;j++){
         cin >> arr[i][j];
		}
	}
    for(int i =0;i<3;i++){
		for(int j =0;j<4;j++){
         cout << arr[i][j]<<" ";
		}
		cout<<endl;
	}

	cout<< isPresent(arr,3,4,13)<<endl;
	while(n--){
	int target ;
	cin >> target;

	if(isPresent(arr,3,4,target)){
		cout<<target<<" is present !"<<endl;
	}else{
		cout<<target<<" is not present !"<<endl;
	}}
}