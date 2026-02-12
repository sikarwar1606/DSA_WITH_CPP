#include <iostream>
using namespace std; 
int main(){
    int arr[]={5,-4,8,9,0};
    int index=0;
    
    // for(int i=0; i<8; i++){
    //     cout << arr[i] << endl;
    // }

    //Find the smallest number
    int smallest = INT16_MAX;
    // cout << smallest << endl; 
    for(int i=0; i<5; i++){
        if(arr[i]<smallest){
            smallest = arr[i];
            index=i;
        }
    }
    cout << smallest << " on index " << index << endl; 

}