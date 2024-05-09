#include<bits/stdc++.h>
using namespace std;

int sumOfSq(int n){
	if(n==1){
		return 1;
	}
	return n*n + sumOfSq(n-1);
}

int main(){
	int t;
	cin >> t ;
	while(t--){
		int n;
		cin >> n; 
	    cout << sumOfSq(n)<<endl;
	}
     
}