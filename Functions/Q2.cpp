#include <iostream>
using namespace std; 
int main(){
    int num = 1455; 
    int num2 = num; 
    int sum = 0; 
    for(int i=num2; num2>0;){
        sum += num2%10;
        num2 = num2/10; 
    }
    cout << sum;
}