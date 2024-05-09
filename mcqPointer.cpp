#include<iostream>

using namespace std;

int main(){
	int num =5;
	int a = num;
	a++;

	cout<<num <<endl;

	int *ptr = &num ;
	(*ptr)++;

	cout<<num <<endl; 
}