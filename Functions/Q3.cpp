#include <iostream> 
using namespace std; 
//Calculate the factorial
int factorial(int num){
    int facto = 1;
    for(int i=0; i<num; i++){
        facto *= num-i;
    }
    return facto;
}
int calNcR(int n, int c){
    int result = factorial(n)/(factorial(c)*(factorial(n-c)));
    return result;
}
int main(){
    cout << calNcR(5,2);
}