//Write a function to swap the minimum and maximum number of an array of integers.
// #include <iostream>
// using namespace std;

// int swapMinMax(int arr[], int size){
//     int min = arr[0];
//     int max = arr[0];
//     int minIndex = 0;
//     int maxIndex = 0;
//     for(int i=1; i<size; i++){
//         if(arr[i]<min){
//             min = arr[i];
//             minIndex = i;
//         }
//         if(arr[i]>max){
//             max = arr[i];
//             maxIndex = i;
//         }
//     }
//     swap(arr[minIndex], arr[maxIndex]);
// }

// int main(){
//     int arr[]={1,4,5,2,3};

//     return 0; 
// }

#include <iostream>
using namespace std;
int swapMinMax(int arr[], int size){
    int min = arr[0];
    int max = arr[0];
    int minIndex = 0; 
    int maxIndex = 0; 

    for (int i=1; i<size; i++){
        if(arr[i]<min){
            min = arr[i]; 
            minIndex = i; 
        }
        if(arr[i]>max){
            max = arr[i]; 
            maxIndex = i; 
        }
        
    }
    swap(arr[minIndex], arr[maxIndex]);
    
    cout << minIndex << " " << maxIndex << endl;
}
int main(){
    int arr[]={1,2,3,4,2,8};
    swapMinMax(arr, 6);

}