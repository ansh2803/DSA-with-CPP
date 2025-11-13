#include<iostream>
using namespace std;
int main(){
    int n = 5;
    int arr[n] = {2,4,6,8,10};
    int target = 7;
    int max = arr[0];
    for(int i=0;i<=n-1;i++){
        if(arr[i]==target){
            cout<<"element found"<<std::endl;
            cout<<"found at index:"<<i<<std::endl;
        } 
    }
    cout<<"element not found"<<std::endl;
    return 0;
}