//Square pattern 
#include <iostream>
using namespace std;
int main(){
    int rc = 3; 
    int num = 01; 
    char ch = 'A';
    for(int i=0; i<rc; i++){
        
        for(int j=0; j<rc; j++){
            cout << ch << ' ' ; 
            ch++;
        }
        cout << "\n";
    }

    for(int i = 0; i<rc; i++){
        for(int j=0; j<rc; j++){
            cout << num <<" "; 
            num++;
        }
        cout << endl;
    }

}