//Write a code to calculate the sum and product of an array of integers.
#include <iostream>
using namespace std; 

int calSum(int arr[], int size){
    int sum = 0; 
    for(int i=0; i<size; i++){{
        sum += arr[i];
    }}
    return sum; 
}
int calPrd(int arr[], int size){
    int prd = 1; 
    for(int i=0; i<size; i++){
        prd *= arr[i];
    }
    return prd; 
}



int main(){
    int arr[]={1,2,3,4,5};
    cout << "The sum of the array is: " << calSum(arr, 5) << endl;
    cout << "The product of the array is: " << calPrd(arr, 5) << endl;
    // int sum = 0; 
    // int prd = 1; 
    // for(int i=0; i<5; i++){
    //     sum += arr[i];
    //     prd *= arr[i];
    // }
    // cout<<"The sum of the array is: "<<sum<<endl;
    // cout<<"The product of the array is: "<<prd<<endl;
}