#include<bits/stdc++.h>
using namespace std ;
 
int main(){
	map<string,int> freq;
	int n ;
	cin>>n;
    while(n--){
    	string s;
    	cin>> s;

    	if(freq[s]==0){
    		cout<<"OK\n";
    	}else{
    		cout<<s<<freq[s]<<endl;
    	}
    	freq[s]++;
    }

}