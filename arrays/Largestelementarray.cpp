//Largest Element in an Array
#include <iostream>
using namespace std;
int main(){
   std:: cout<<"Enter the size of the array: ";
    int n; 
   std:: cin>>n;
    int arr[100];
    std::cout<<"enter the element";
    for(int i = 0;i<=n-1;i++){
        cin>>arr[i];
    }
    int max = arr[0];
    cout<<"The largest element is: ";
    for(int i = 0;i<=n-1;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    cout<<max;
    
    return 0;
}