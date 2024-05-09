#include <iostream>

using namespace std;

int main(){
	char ch[6] = "abcde"; //extra space for null element ;

	int arr[6] = {1,2,3,4,5,6};

	cout<<arr<<endl;
	cout<<ch<<endl;

	char *c = &ch[0];

	cout<<c<<endl;

	//if not for extra value(null) this will happen
	char ch2 = 'b';
	char *c2 = &ch2;

	cout<<c2<<endl;
	cout<<ch[1]<<endl;
	cout<<&ch[1]<<endl;
 }