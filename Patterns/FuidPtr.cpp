#include <iostream>
using namespace std;
int main(){
    int a = 5;
    int b = 0;
    for(int i=0; i<5; i++){
        for(int k=0; k<b; k++){
            cout << " ";
        }
        b++;
        for(int j=0; j<a; j++){
            cout << b;
            
        }
        a--;
        cout << endl;
    }
}