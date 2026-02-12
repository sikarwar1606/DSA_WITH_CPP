//Linear Search Algorithm
#include <iostream>
using namespace std; 

int LinearSe(int arr[], int sz, int target){
    for(int i=0; i<sz; i++){
        if(arr[i]==target){
            return i;
        }
        
    }
    return -1; 
}

int main(){
    int arr[] = {1,3,5,3,8,2};
    int sz = 6;
    int target=5;
    cout << LinearSe(arr, sz, target) << endl;
    return 0;
}