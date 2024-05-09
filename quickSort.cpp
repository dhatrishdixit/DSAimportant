// #include <bits/stdc++.h>

// using namespace std ;

// int partitionFind(vector <int> &arr,int low ,int high){
//     int pivot = arr[low];
//     int i = low + 1;   // left side for targeting larger elements 
//     int j = high ;   // right side for targeting smaller elements 
    

//     while(i<=j){
//         while(arr[i]<=pivot && i<=high-1){
//            i++;
//         }

//         while(arr[j]>pivot && j>= low+1){
//           j--;
//         }
//         if(i<j)swap(arr[i],arr[j]);

//     }

//     swap(arr[low],arr[j]);
//     return j;
// }

// void quickSort(vector <int> &arr,int low , int high){
//    if(low<high){
//      int partition = partitionFind(arr,low,high);
//      quickSort(arr,low,partition-1);
//      quickSort(arr,partition+1,high);
//    }

// }

// int main(){
//     vector <int> arr{
//         1,4,7,3,4,6
//     };
//     quickSort(arr,0,5);
//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i]<<" ";
//     }


// }



// /// look code studio quick sort question though logic is correct is here as well 



#include <bits/stdc++.h> 
using namespace std ;
int partitionFind(vector<int> &arr,int low , int high){
    int pivot = arr[low];
    int i = low ;
    int j = high ;

    while (i<j){
        while (arr[i]<=pivot && i<= high){
            i++;
        }
        while (arr[j]>pivot && i>= low){
            j--;
        }
        if(i<j) {
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
}

void qS(vector<int> &arr,int low ,int high){
        if(low<high){
            int partition = partitionFind(arr,low,high);
            qS(arr,low,partition-1);
            qS(arr,partition+1,high);
        }
}

int main(){

     vector<int> arr {
        1,3,5,7,8,3,6
     };

     qS(arr,0,arr.size());
     for(int i =0;i<arr.size();i++){
        
        cout <<arr[i]<<" ";

     }

}
// check error on earlier one 
