// brute force
class Solution {   
private:    
     bool checkPrime(int num){
        for(int i=2;i<num;i++){
            if(num%i==0){
                return false;
            }
        }
        return true;
    }
public:

    int countPrimes(int n) {
        int count =0;
        for(int i =2;i<n;i++){
            if(checkPrime(i)){
                count++;
            }
        }
        return count ;
    }
};

// optimised sieve method 