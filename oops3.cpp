#include <bits/stdc++.h>

using namespace std ;

class hero{
 int health ;
 int age ;
 public:
 static int time ;
 static int random(){
    return time ;
 }
  hero(){
    cout<<"constructor is called "<<endl;
  }

  ~hero(){
    cout<<"destructor is called "<<endl;
  }

  void setHealth(int a ){
    health = a ;
  }
   
  void setAge(int b ){
    age = b;
  }
  void print(){
    cout<<" age : "<<this->age<<" health : "<<this->health<<endl;
  }

};

int hero :: time =5;

int main(){

   cout << hero::time<<endl; 
   cout << hero::random()<<endl;

   
   hero hero1;
   hero1.setHealth(11);
   hero1.setAge(12);
   hero1.print();


   hero *hero2 = new hero;
   //manual destructor call 
   delete hero2;
}