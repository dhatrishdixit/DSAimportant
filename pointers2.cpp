#include <iostream>

using namespace std ;

int main() {
     int arr[10] = {1,21,3,4,5,6,7,8,9,10};

     cout<<"address of first block is "<<arr<<" size: "<<sizeof(arr)<<endl;

     cout<<"address of first block is "<<&arr[0]<<"  value is :"<<arr[0]<<endl;
     // note the difference in outcome 
     cout<<*arr<<" "<<*(arr+1)<< " "<<*(arr+2)<<endl;
      cout<< 6[arr]<<endl;

      int *p = arr;
      int *p2 = arr + 2;
       cout << *p <<" "<<*p2<<endl;

       cout<< sizeof(arr)<<" "<<sizeof(p)<<" "<<sizeof(*p) << " "<<sizeof(int*)<<endl;

     int temp[10] = {1,2};
     cout<<sizeof(temp)<<" "<<sizeof(*temp)<<" "<<sizeof(&temp)<<endl; 
     int *ptr = &temp[0];
     cout <<sizeof( ptr)<<" "<<
     sizeof(*ptr)<<" "<<sizeof(&ptr)<<endl; 

}