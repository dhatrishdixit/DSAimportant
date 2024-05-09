#include<bits/stdc++.h>
using namespace std;
 pair<string,int> myname(){
 	return {"dhatrish",29};
 }


int main(){
	// can be used to return multiple values from a function 
    pair<int,string>p={29,"dhatrish"};
    cout<<p.first<<" "<<p.second<<endl;
    cout<<myname().first<<" "<<myname().second<<endl;
    pair<int,string>rollno[5]={
    	{2,"aa"},{2,"bb"},{1,"a"},{4,"cc"},{0,"b"}
    };
    sort(rollno,rollno+5);
    // for(int i =0;i<5;i++){
    // 	cout<<rollno[i].first<<" "<<rollno[i].second<<endl;
    // }
    
    //iterators
   // iterators are just like pointers 
   // iterator

   vector<int>v={10,15,20,25,5};
   
   vector<int>::iterator it=v.begin();
    // or by simply using auto 
   auto it2 = v.begin();
   cout<<*it<<endl;
   it += 3;
   cout <<*(it +1) +3<<endl;

   // pointer 

   // int a[5]={1,2,4,5,6};
   // int *p=a;
   // cout<< *p <<endl;
    

    //set 
    // ordered unique
    // note -- you cant access the elements of set using [ ] backet operator 
    set<int>s={2,3,4,5,3,3,3,3,6,87};
   // s.count tells whether element is present in a set or not 
   cout<< s.count(2)<<endl;
   cout<< s.count(3)<<endl;
   cout<< s.count(4)<<endl;
   cout<< s.count(5)<<endl;
   cout<< s.count(9)<<endl;

   s.erase(3);

   cout<<s.count(3)<<endl;
   s.insert(3);
   cout<<s.count(3)<<endl;

    // for(int i=0;i<s.size();i++){
    // 	// cout<<s[i]<<" ";
    // }
   // set iterators 
    // you cannot access set elements  directly like that in vector or array so you have to use array iterators 
   auto itr = s.begin();
   // in this way we can access elements of a set 
   cout<<*itr<<endl; 
   // just for reference 
   cout<<"start"<<endl;
   for(int i=0;i<s.size();i++){
   	cout<<*itr<<endl;
   	itr++;

   }
   
   //map 

   cout <<" MAP starts here "<<endl;

   // map<key_datatype,value_datatype> variable_name ;

   // map iterator is similar to set but it gives a pair of {key,pair}

   map<int,int> m;
    cout<<m.size()<<endl;
    cout << m[15]<<endl;
    // instantly creates element and value of the element is 0
    cout<<m.size()<<endl;


// for frequency 

    map<int,int>freq;

    freq[10]++;
      freq[10]++;
        freq[10]++;
          freq[10]++;
            freq[10]++;

   cout<< freq[10]<<" "<<freq[4]<<endl;
   
  


return 0;
   }
      

