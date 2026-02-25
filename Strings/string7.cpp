#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string> arr(n);
    cout<<"enter strings"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> freq(26,0);
    for(char c : arr[0]){
        freq[c - 'a']++;
    
    }
    return 0;
}