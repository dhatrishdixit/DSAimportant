#include <bits/stdc++.h>

using namespace std ;

bool firstSumSubsequence(int ind,vector<int> &ds,int sum , int target ,int n ,int arr[]){
        if(ind == n){
            if(sum == target){
                for( auto it: ds){
                    cout<<it<<" ";
                }
                cout<<endl;
                return true ;
            }
            return false;
        }

        ds.push_back(arr[ind]);
        sum += arr[ind];
        if(firstSumSubsequence(ind+1,ds,sum,target,n,arr)==true) return true ;

        ds.pop_back();
        sum -= arr[ind];
        if(firstSumSubsequence(ind+1,ds,sum,target,n,arr)==true) return true ;

        return false;
}

int main(){
     int arr[3]={1,2,1};
     int target = 2;
     vector<int> ds;
     int n = 3;

     firstSumSubsequence(0,ds,0,target,n,arr);
}