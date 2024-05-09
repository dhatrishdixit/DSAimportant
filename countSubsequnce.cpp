#include <bits/stdc++.h>

using namespace std ;

int firstSumSubsequence(int ind,vector<int> &ds,int sum , int target ,int n ,int arr[]){
        if(ind == n){
            if(sum == target){
                // for( auto it: ds){
                //     cout<<it<<" ";
                // }
                // cout<<endl;
                return 1;
            }
            return 0;
        }

        ds.push_back(arr[ind]);
        sum += arr[ind];
        int l = firstSumSubsequence(ind+1,ds,sum,target,n,arr);

        ds.pop_back();
        sum -= arr[ind];
        int r = firstSumSubsequence(ind+1,ds,sum,target,n,arr) ;

        return l+r;
}

int main(){
     int arr[3]={1,2,1};
     int target = 2;
     vector<int> ds;
     int n = 3;

     cout<<firstSumSubsequence(0,ds,0,target,n,arr);
}