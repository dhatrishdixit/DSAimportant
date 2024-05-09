#include <iostream>
using namespace std;

int main(){

	int num = 5;
	cout<<num<<endl;

	// address Operator - &

	cout << "address of num is "<< &num<<endl;

	int *ptr = &num;
	// pointer is used to store adress , dont just declare a pointer initialise it 
	cout<<ptr<<endl;
	cout<< &ptr<<endl;

	//this is important 
	cout<< *ptr<<endl;
	cout<< *(&num)<<endl;

	//size of pointer 

	// cout<< " size of variable num is :"<<sizeof(num)<<endl;

	// cout<<" size of pointer :"<<sizeof(ptr)<<endl;





	char Char = 'a';

	char *ptr2 = &Char;

	cout<<Char<<endl;
	cout<<ptr2<<endl;
	cout<<*ptr2<<endl;
	cout<<&ptr2<<endl;

	// cout<<" size of pointer :"<<sizeof(ptr2)<<endl;

  //copying a pointer 

	int *q = ptr;

	cout << q<<endl<<*q <<endl;

	//important concept 
 
	cout<< ptr +1<<endl;

	// there is difference in 

  *ptr = *ptr + 1;
   //and 

  ptr = ptr + 1;
  cout << ptr;
  
    
	
}  