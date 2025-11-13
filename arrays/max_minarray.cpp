#include<iostream>
#include<climits>
int getmax(int num[], int size){
    int max = INT_MIN;
    for(int i = 0; i<size; i++){
        if(max > num[i]){
            max = num[i];
        }
        return max;

    }
}
int main() {
    int size;
   std::cout<<"enter size of array";
   std::cin>>size;
    int arr[100];
    for(int i = 0; i<size; i++){
        std::cin>>arr[i];
    }
    std::cout<<"max value"<<getmax(arr, size)<<std::endl;

    return 0;

}