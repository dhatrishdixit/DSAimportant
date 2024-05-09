#include<iostream> 
#include<climits>

using namespace std;

void max(int arr[],int size){
    int max=INT_MIN ;
    int index=0;  
    for (int i=0;i<size;i++){
    	if(arr[i]>max){
           max = arr[i];
           index = i ;
    	}

    }
    cout<<"largest element is "<<max<<" at index "<<index<<endl;
}

void min(int arr[],int size){
	int min =INT_MAX;
	int index =0;
	for (int i=0;i<size;i++){
		if(arr[i]<min){
			min = arr[i];
			index =i;
		}
	}
	cout <<"smallest element is "<<min<<" at index "<<index<<endl;
}

int main(){
	int size;
	cin >> size;
//	int arr[size]; very bad practice, directly putting size while
//	initiallising is a very bad practice

	int num[100];
	for(int i=0;i<size;i++){
		cin>>num[i];
	}
	max(num,size);
	min(num,size);
}