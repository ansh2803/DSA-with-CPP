/*Given an array of integers nums, return the second-largest element 
in the array.If the second-largest element does not exist, return -1*/
#include <iostream>
using namespace std;
int main(){
    /*first i find maximum element in the array */
    int n=6;
    int nums[n]={5,3,2,4,1,7};
     int max = nums[0];
    for(int i = 0;i<=n-1;i++){
        if(nums[i]>max){
            max = nums[i];
        }
    }

    //  cout<<max;
    //then i find second largest element it is i think good approch
    int secondmax = -1;
    for(int i = 0;i<=n-1;i++){
        if(nums[i]>secondmax && nums[i]<max){//this condition is very important
            secondmax = nums[i];
        }
    }
    cout<<secondmax;

    return 0;
}
