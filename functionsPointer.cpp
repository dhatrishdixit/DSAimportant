#include <iostream>

using namespace std ;

void updateValue(int *p){
	*p = *p +1;
}

void updateAddress(int *p){
	p = p+1;

	cout<<"in between add"<<p<<endl;
}

int sum(int arr[],int n){

	// cout<<"first "<<sizeof(arr);

	int s =0;

	for(int i=0;i<n;i++){
		s += i[arr];
	}
	return s;
}



int main(){
    // int a = 5;
    // int *ptr = &a;

    // cout<<"before"<<endl;
    // cout<<ptr<<endl;

    // updateAddress(ptr);

    // cout<<"after"<<endl;
    // cout<<ptr<<endl;

    //   cout<<"before value"<<endl;
    // cout<<*ptr<<endl;

    // updateValue(ptr);

    // cout<<"after value"<<endl;
    // cout<<*ptr<<endl;

   int arr[5]={1,2,3,4,5};
    cout<<sum(arr,5);
   cout<<sum(arr+3,5-3);
   

}