/*write a program to check if the given array is sorted
in (ascending / Increasing / Non-decreasing) order or not.
If the array is sorted then return True, Else return False.*/
#include <iostream>
using namespace std;
int main(){
    std::cout<<"enter size of array:"<<std::endl;
    int n;
    cin>>n;
    int arr[100];
    cout<<"enter the element:"<<std::endl;
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int max = arr[0];
    for(int i=1;i<=n-1;i++){
        if(arr[i]<max){
            cout<<"The array is not sorted"<<endl;
            return 0;
        }
        max = arr[i];
    }
    cout<<"The array is sorted"<<endl;
    

    return 0;
}