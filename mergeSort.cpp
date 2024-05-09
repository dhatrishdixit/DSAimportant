#include <iostream>
#include<bits/stdc++.h>

using namespace std;

void merge(vector <int> &arr,int low,int mid ,int high){
    
    int i = low ;
    int j = mid + 1;
    vector<int> temp;
    // merging the arrays to form sorted array in temp 
    while (i<=mid && j<=high){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
        }

    } 

    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=high){
        temp.push_back(arr[j]);
        j++;
    }

    // copying temp to arr
    // index is done in this way so as to update the array with sorted values 

    for(int k = low ; k <= high ;k++){
        arr[k]= temp [k-low];
    }
   

}

void mergeSort(vector<int> &arr,int low ,int high ){

    if(low == high){
        return ;
    }

    int mid = low + (high-low)/2;
    //breaking array in different parts - left and right 
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
}

int main(){
   vector<int> arr{
      1,3,5,7,4,1,6
   };
   mergeSort(arr,0,6);
   for(int i =0;i<=6;i++){
    cout<<arr[i]<<" ";
   }

}