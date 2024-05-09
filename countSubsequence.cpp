#include <bits/stdc++.h>

using namespace std ;

int firstSumSubsequence(int ind,int sum , int target ,int n ,int arr[]){
        if(ind == n){
            if(sum == target){
                //condition satisfied
 
                return 1;
            }
            //condition not satisfied 
           else return 0;
        }

     
        sum += arr[ind];

        //pick
        int l = firstSumSubsequence(ind+1,sum,target,n,arr);

       
        sum -= arr[ind];

        //not pick 
        int r = firstSumSubsequence(ind+1,sum,target,n,arr) ;

        return l+r;
}

int main(){
     int arr[3]={1,2,1};
     int target = 2;
 
     int n = 3;

     cout<<firstSumSubsequence(0,0,target,n,arr);
}