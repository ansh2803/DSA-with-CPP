#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int arr[5] = {0,1,0,3,12};
    int n = sizeof(arr)/sizeof(arr[0]); 
    int l=0;
    for(int r=0;r<n;r++){/*here we have take two pointers
                           r and l*/
        if(arr[r] !=0){
            swap(arr[l],arr[r]);
            l++;
        }
    }
    cout<<"Array after moving zeros to end: \n"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}