#include <iostream>
using namespace std; 
//Calculate sum fo numbers from 1 to n
int calSum(int n){
    int sum=0; 
    for(int i=n; i>0; i--){
       sum += i;
    }
    return sum;
    
}
//Calculate the n factorial
int calFatcorial(int n){
    int factorial = 1; 
    for(int i=n; i>0; i--){
        factorial *= i; 
    }
}
int main(){
    //Calculate sum fo numbers from 1 to n
    cout << calSum(7) << endl; 
    //Calculate factorial    
    cout << calFatcorial(5);

}