#include <iostream>
#include<bits/stdc++.h>
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
// row sum
int printSumRow(int arr[][4],int i,int j){
	
	for(int row=0;row<i;row++){
		int sum =0;
		for(int column =0;column<j;column++){
			sum +=arr[row][column];
		}
		cout<<sum<<endl;
	}
	
}

// largest row sum 

void largestRowSum(int arr[][4],int i,int j){
	int max = INT_MIN;
	int row1 = 0;
		for(int row=0;row<i;row++){
		int sum =0;
		for(int column =0;column<j;column++){
			sum +=arr[row][column];
		}
		if(sum>max){
			max = sum ;
			row1 = row;
		}
	}
	cout<<"largest sum is :"<<max<<" in row "<<row1 + 1<<endl;
	
}

// column sum 
int printSumColumn(int arr[][4],int i,int j){
	
	for(int column=0;column<j;column++){
		int sum =0;
		for(int row =0;row<i;row++){
			sum +=arr[row][column];
		}
		cout<<sum<<endl;
	}
	
}

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
    printSumRow(arr,3,4);
    largestRowSum(arr,3,4);
    printSumColumn(arr,3,4);
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