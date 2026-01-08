#include<iostream>
using namespace std;
int binarysearch(int arr[],int size,int target){
     int low,high,mid;
     low = 0;
     high = size-1;
     mid = low+high/2;
     while(low<=high){
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<target){
             low = mid+1;
        }
        else {
            high = mid - 1;
        }
     }
    //  return -1;
    

}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int size=sizeof(arr)/sizeof(int);
    int target = 6;
    int searchindex = binarysearch(arr,size,target);
    return 0;
}