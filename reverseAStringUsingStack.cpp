#include <iostream>
#include <stack>
#include<string>
using namespace std ;

int main(){

    string s1 = "hi";
   stack <char> s;

   int i = 0 ;
   while(i<s1.length()){
       s.push(s1[i]);
       i++;
   }

    string ans;

    while(!s.empty()){
        char ch = s.top();
        ans.push_back(ch);
        s.pop();
    }
    cout << ans <<endl;
    return 0;
}