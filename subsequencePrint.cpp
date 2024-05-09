#include <iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

void printF(int i,vector<int>&sub,int n ,int arr[]){
    if(i==n){
       	if(sub.size()==0){
    		cout<<"{}";
    	}
    	for(auto it:sub){
    		cout<<it<<" ";
    	}
    	cout<<endl;
      return;
    	
    }
    // take particular element into our subsequence 
    sub.push_back(arr[i]);
    printF(i+1,sub,n,arr);
    // remove that element from our subsequence
    sub.pop_back();
    printF(i+1,sub,n,arr);

}

int main(){
  int arr[3]={3,2,1};
   int n = 3;
   vector<int>sub;
   int i =0;
   printF(i,sub,n,arr);

}