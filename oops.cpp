#include<iostream>
#include <string>
// #include "bike.cpp"
using namespace std;
class bike{
    //properties , declaring class in different file 
    private :
    int yearFound;
    public:

    bike(){
        cout<<"constructor is called "<<endl;
    }
    string modelName;
    int unitsSold;
    int getyearFound(){
        return yearFound;
    };
    void setyearFound(int yearFound){
        this->yearFound = yearFound;
    };
    

};


int main(){
    cout<<"hi"<<endl;
    // object created statically 
    
    bike a ;


    //onject created dynamically 

    bike *b = new bike;
    cout<<"hello"<<endl;





//    bike royalEnfield ;
// //    cout<<sizeof(royalEnfield);
// //    royalEnfield.yearFound = 1901;
//    royalEnfield.setyearFound(1901);
//    royalEnfield.unitsSold = 100000;
//    royalEnfield.modelName = "meteor";
//    cout << royalEnfield.getyearFound();


//    bike *hero = new bike;
//     hero->setyearFound(2000);

    
}