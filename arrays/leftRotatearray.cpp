#include<iostream>
using namespace std;
int main(){
    int arr[6] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int d = 2; // number of positions to rotate
    int temp[d];
    // Store first d elements in temp
    for(int i=0; i<d; i++){

        temp[i] = arr[i];
    }
    // Shift the rest of the array to the left
    for(int i=d; i<n; i++){
        arr[i-d] = arr[i];
    }
    // Copy the temp elements to the end of the array
    for(int i=0; i<d; i++){
        arr[n-d+i] = temp[i];
    }
    // Print the rotated array
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
  
    
    return 0;
}