#include <iostream>

using namespace std ;

int convert(string &s){
    int i =0;
    int result =0;
     // convert digits 
     while(i<s.length()){
        
            result *= 10;
            result += s[i]-'0';
            i++;

        
     }

     return result ;

}


int main(){
   

   string s = "1234";

   cout<<s<<endl;
   cout<<convert(s)<<endl;
   cout<<sizeof(convert(s))<<endl;

}