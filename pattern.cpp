#include<iostream>

using namespace std;

int main(){

	 int i = 1;
	 int n ;
	 cin >> n ;
	  // 123
	  // 456
	  // 789
     // while(i<=n){
     // 	int j = 1;
     // 	while(j<=n){
     // 		cout<<j+(i-1)*n<<" ";
     // 		j++;
     // 	}
     // 	i++;
     //    cout<<endl;
       
     // }

	 // *
	 // **
	 // ***
	 // ****
	 // while (i<=n){
	 // 	int j =1;
	 // 	while(j<=i){
	 // 		cout<<i;
	 // 		j++;
	 // 	}
	 // 	cout<<endl;
	 // 	i++;
	 // }

	 // 1
	 // 23
	 // 456
	 // 78910

	 int value = 1; // very important step as if placed 
	 // it will be reset everytime loops restart therefore for 
	 // it to not happen it is much preferred to have variable value outside
	 // 	 while (i<=n){
	 // 	int j =1;
	 	
	 // 	while(j<=i){
	 // 		cout<< value ;
	 // 		value++;
	 // 		j++;
	 // 	}
	 // 	cout<<endl;
	 // 	i++;
	 // }


	 //AAAA
    //BBBB
    //CCCC
    //DDDD

	 // while(i<=n){
	 // 	// char c = 'A'; 
  //     //output when doing this mistake 
  //     // AAAA
  //     // BCDE
  //     // CEGI
  //     // DGJM
	 // 	//asal mei kyunki c ka value apan fix kardenge there fore 
	 // 	//jab bhi  koi change hoga har bar hoga 
	 // 	// example when 
	 // 	// i becomes 2 ; for first time c will become B than it will be B + 2 -1 = C
	 // 	// similarly when i becomes 3 for first time c will become C than C + 2 and so on 

	 // 	// that is why we want char c to be declared inside loop to have separate calculation for each value of i , which very important 
	 // 	int j =1;
	 // 	while(j<=n){
	 // 		// c += i-1;
  //         char c ='A' + i -1;
  //        cout << c;
  //        j++;
	 // 	}
	 // 	i++;
	 // 	cout<<endl;
	 // }


	 //ABC
	 //ABC
	 //ABC

	 // while(i<=n){
	 // 	// char c = 'A'; 
   
	 // 	int j =1;
	 // 	while(j<=n){
	 // 		// c += i-1;
  //         char c ='A' + j -1;
  //        cout << c;
  //        j++;
	 // 	}
	 // 	i++;
	 // 	cout<<endl;
	 // }

	 // similarly look for 
	 //ABC
	 //DEF
	 //GHI
  //   char c = 'A';
	 // while(i<=n){
  //      int j =1;
  //      while(j<=n){
  //           cout << c ;
  //           c = c + 1;
  //           j++;

  //      } 
  //      i++;
  //      cout<<endl;
	 // }


   // ABC
   // BCD
   // CDE
	 // while(i<=n){
  //      int j =1;
  //      while(j<=n){
  //          char c = 'A' + (j-1) + (i-1);
  //           cout<<c;
  //           j++;

  //      } 
  //      i++;
  //      cout<<endl;
	 // }


   //A
	//BC
	//DEF
  //      char c ='A';
	 // 	 while(i<=n){
  //      int j =1;
  //      while(j<=i){
  //      	cout<<c;
  //        c= c + 1;
  //        j++;

  //      } 
  //      i++;
  //      cout<<endl;
	 // }
   

   //A
	//BC
	//CDE
	//DEFG
  //  	 while(i<=n){
  //      int j =1;
  //      while(j<=i){
  //          char c = 'A' + (j-1) + (i-1);
  //           cout<<c;
  //           j++;

  //      } 
  //      i++;
  //      cout<<endl;
	 // }


   //D
	//CD
	//BCD
	//ABCD
	 // 	 while(i<=n){
  //      int j =1;
  //      while(j<=i){
  //          char c = 'A' + (n-1) -(i-1) + (j-1);
  //           cout<<c;
  //           j++;

  //      } 
  //      i++;
  //      cout<<endl;
	 // }

   //   *
   //  **
   // ***
   //****
	while(i<=n){
		int j =1;
		while(j<=n-i){
			cout<<" ";
			j++;
		} 

		//important to add upper limit else it will be an infinite loop
		while(j>n-i && j<=n){ 
			cout<<"*";
         j++;
		}
		cout<<endl;
		i++;
	}



}