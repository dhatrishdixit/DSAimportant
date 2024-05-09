#include <iostream>
#include <string.h>
using namespace std ;

bool pallindrome(int i , string &s){

     int n = s.size();
      if(i>=n/2){
      	return true;
      }
      if(s[i]!=s[n-i-1]){
          return false;
      }

      return pallindrome(i+1,s);
}

int main(){
     
     string s = "mada";
      bool ans = pallindrome(0,s);
     cout<<ans;

}