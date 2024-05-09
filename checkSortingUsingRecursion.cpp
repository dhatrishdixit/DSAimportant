#include<bits/stdc++.h>

using namespace std ;

bool checkSorting(int arr[],int n ,int i ){
    if(n <= 1 ){
        return true ;
    }

    if(arr[i]<arr[i-1]){
        return false;
    }
    if(i==n-1){
        return true ;
    }
    checkSorting(arr,n,i+1);
}
 // better way 
int sumArr(int arr[],int n,int len){
   
    len += arr[0];
    if(n==1){
        return len;
    }
    sumArr(arr+1,n-1,len);
}

//more ways for sum 
int sumArr2(int arr[],int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return arr[0];
    }

    int remainingPart = sumArr2(arr+1,n-1);
    int sum = arr[0] + remainingPart;
    return sum ;
}

int main(){

    int arr[5]={1,2,5,7,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    if(checkSorting(arr,n,1)){
        cout<<"array is sorted ";
    }else {
        cout<<"array is not sorted ";
    }
    cout<< sumArr(arr,n,0)<<" ";
    cout<<sumArr2(arr,n);
}