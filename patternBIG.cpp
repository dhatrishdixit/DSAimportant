#include<iostream>

using namespace std; 

int main(){
	int i = 1;
	int n ;
	cin >> n;

	while(i<=n){
		int j=1;
		int space = n-i;
		while(space){
			cout<<" ";
			space--;
		}
		// while(j>n-i&&j<=(n+(i-1))){
			
			while(j<=n){
				cout<<j-space;
				j++;
			}
			while(j>n &&j<=n+(i-1)){
				cout<<(i-1)+(j-(n+1));
				j++;
			}

		// }
		i++;
		cout<<endl;
	}
}