#include<bits/stdc++.h>

using namespace std;
// bool check = true ;    generally not recommended
bool checkSumSubsequence(int ind, vector <int> &ds, int sum ,int target,int arr[] ,int n){
     if(ind == n) {
      //condition satisfied 
        if(sum == target 
        //  && check
         ){
            if(ds.size()==0){
                cout<<"{}";
            }
            for(auto it: ds){
                   cout<<it<<" ";
            }
            return true ;
            cout<<endl;
            // check = false;
           
        } 
        // condition not satisfied 
        return false;
     }  
     // pick     
     ds.push_back(arr[ind]);
     sum += arr[ind];
     if(checkSumSubsequence(ind+1,ds,sum,target,arr,n) == true) return true ;
    // not pick 
     ds.pop_back();
     sum -= arr[ind];
     if(checkSumSubsequence(ind+1,ds,sum,target,arr,n) == true) return true ;


     return false ;


}


int main(){
    int arr[3]={1,2,1};
    int target = 2;
    vector<int> ds;
    int index = 0;
    int sum =0;

    checkSumSubsequence(index,ds,sum,target,arr,3);



}