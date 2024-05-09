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

void print(int arr[],int n ){
          cout<<"size of Array: "<<n<<endl;
          for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";

          }
          cout<<endl;
}

//linear search 

bool linearSearch(int *arr,int n , int target ){
    print(arr,n); 
    // base case 
   
      if(n==0){
        return false;
      }
      if(arr[0]==target){
        return true ;
      }
      linearSearch(arr+1,n-1,target);
}


void print2(int arr[],int s ,int e ){
    cout <<endl;
    for(int i =s;i<=e;i++){
       cout<<arr[i]<<" ";       
    }
    
}

//Binary search 

bool binarySearch(int *arr,int s , int e,int target ){
    // base case 
         if(s>e){
            return false ;
         }      
         print2(arr,s,e);


         int mid = s +(e-s)/2;
        cout<<"arr mid is "<<arr[mid]<<" "<<endl;
         if(arr[mid]==target){
            return true ;
         }else if(arr[mid]>target){
            return binarySearch(arr,s,mid-1,target);
         }else{
             return binarySearch(arr,mid+1,e,target);
         }

    

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
    cout<<sumArr2(arr,n)<<endl;

    if(linearSearch(arr,n,6)){
        cout<<"present "<<endl;
    }
    else{
        cout<<"absent"<<endl;
    }

    int arr2[5]={1,2,4,5,6};
    if(binarySearch(arr2,0,4,5)){
        cout<<"true-binary search "<<endl;
    }else{
        cout<<"false-binary search "<<endl;
    }
}