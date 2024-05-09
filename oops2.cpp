#include <iostream>
#include <bits/stdc++.h>
// #include <string>
using namespace std ;

class Human {
  
  int stamina ;
  int age ;

  public:
// once default constructor is removed fir parameterized objects ko hi bana sakenge
   int health ;
   char *name;
   char level;
  // making of our own copy constructor
  Human(Human &temp){
    cout<<"copy constructor is called "<<endl;
    char *ch = new char[strlen(temp.name)+1];
    strcpy(ch,temp.name);
    this->name = ch ;
    this->health = temp.health;
    this->age = temp.age ;
    this->level = temp.level;
    this->name = temp.name ;
  }

  Human(){
    //defining array with default constructor is a good practice
     cout << " object is created "<<endl;
     cout << "default constructor called"<<endl;
     name = new char[100];
  }
 //parameterised constructor 
  Human (int health){
    // value of this 

    cout<<"parameterised constructor is called"<<endl;
    cout<<"value of this :"<<this <<endl;
    this -> health = health ;
  }
     Human (int health,int age){
    
    this-> age = age ;
    this -> health = health ;
  }
     void print1(){
    cout<<" health :"<<health<<endl ;
   }
   void print(){
      cout<<"age :"<<this->health<<endl;
      cout<<"level :"<<this->level<<endl;
      cout<<"name :"<<this->name<<endl;
   }

   void setHealth(int a){
    health = a ;
   }
   void setLevel(char a){
    level = a ;
   }
   void setName(char name[]){
          strcpy(this->name,name);
   } 
     
};


int main(){
    //  // statically creating variable 

    //    Human judo ;
    //    Human ramesh(10) ;
    //    cout<<"address of ramesh :"<<&ramesh <<endl;
    //    ramesh.print1();


    //    Human hanu (0,13);



    //  //dynamically creating variable 
    //   Human *ramesh2 = new Human(11,12); 
    //   ramesh2 -> print();
      
    // copy constructor 

    // Human suresh(10,12);
    // suresh.print();
    // Human ramesh(suresh);
    // suresh.print();
    // cout<<" ramesh printing is done"<<endl;

    
    // ramesh.print();       
    Human babbar ;
    babbar.setHealth(10);
    babbar.setLevel('a');
    char name[7]="babbar";
    babbar.setName(name);
    // babbar.print();

    // // this is the example of shallow copying 
    // Human hero(babbar);
    // hero.print(); 

    // babbar.name[0] = 'g';
    // babbar.health = 10;
    // babbar.print();
    // hero.print(); 
    
    // babbar.name[0]='b';
    // babbar.print();
    // hero.print();

    // deep copy -- chrck this there is some error 
    

    Human hero2(babbar);

    hero2.print();
    babbar.name[0]='g';
    hero2.print();




}