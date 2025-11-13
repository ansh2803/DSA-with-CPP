#include<iostream>
 void printArray(int arr[], int size){
       for(int i = 0; i<size; i++){
           std::cout << arr[i] << " " << std::endl;
       }
   }
int main(){
    /*int number[15] = {0};
    for(int i = 0; i<10; i++){
        std::cout<<number[i]<< " " <<std::endl;
    }*/
   //Array with function 
   int n;
   std::cout << "enter size of array" << std::endl;
   std::cin >> n;
    int arr[n];
      std::cout << "enter element" << std::endl;
    for(int i = 0; i<n; i++){
        std::cin >> arr[i];
    }
    // printArray(arr, 5);
    std::cout << "array in reverse order" << std::endl;
    for(int i = 0 ; i<=n; i++){
        std::cout << arr[n-i] << " " << std::endl;
    }
    
    return 0;
}