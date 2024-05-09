#include<bits/stdc++.h>

using namespace std ;

string reverse(string s1,int s,int e){
    //base case
    if(s>e){
        return s1;
    }
    swap(s1[s],s1[e]);
    return reverse(s1,s+1,e-1);

}

void reverse1 (string &s1 ,int s ,int e ) {
  if(s>e){
        return;
    }
    swap(s1[s],s1[e]);
  reverse1(s1,s+1,e-1);
}

// pallindrome 

bool palindrome(string s,int start,int end )
{
     if(start>end){
         return true;   
     }
     if(s[start]!=s[end]){
        return false;
     }

     return palindrome(s,start+1,end-1);

}
int main(){
   string s1 = "abcde";
   int s= 0;
   int n = s1.size()-1;
   cout<<reverse(s1,s,n)<<endl;
   cout<<s1<<endl;;
   
   string s2 = "qwerty";
   int start =0;
   int end = s2.size() -1 ;
   reverse(s2,0,end);
   cout<<s2<<endl;
   
    string  str = "madam";
   if(palindrome(str,0,str.size()-1)){
    cout<<"palindrome"<<endl;
   }else{
    cout<<"not palindrome "<<endl;
   }
}