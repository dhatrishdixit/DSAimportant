#include<iostream>

using namespace std;

int main(){

	 int i = 1;
	 int n ;
	 cin >> n ;


	while(i<=n){
		int j =1;
		while(j<=n-i){
			cout<<" ";
			j++;
		}
		while(j>n-i && j<=n){
			cout<<"*";
         j++;
		}
		cout<<endl;
		i++;
	}

 

}