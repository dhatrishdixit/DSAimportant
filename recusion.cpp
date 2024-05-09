#include <iostream>

using namespace std;

void f(int i,int n){
	if(i>n-1){
		return ;
	}
	cout<<n-i<<endl;
	f(i+1,n);
}

int main(){
	int n ;
    cin>>n;

    f(0,n);
    return 0;
}