/*: Write a function to find the longest common prefix string amongst an array of strings. 
If there is no common prefix, return an empty string ""*/
/*Input:
 str = ["flower", "flow", "flight"]
Output:
 "fl"*/
/*Input:
 str = ["apple", "banana", "grape", "mango"]
Output:
 ""
Explanation:
 None of the strings share a common starting sequence, so the result is an empty string.
            */
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
string longestcommonprefix(vector <string>& arr){
    string prefix = "";
    for(int i=0;i<arr[0].length();i++){
        char ch = arr[0][i];
        for(int j=1;j<arr.size();j++){
            if(i>arr[j].length() || arr[j][i] != ch){
                return prefix;
            }
        }
        prefix += ch;
    }
}
int main(){
    int n;
    cin>>n;
    vector<string> arr(n);
    cout<<"enter strings"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end());
    cout<<arr[n]<<endl;
    cout<<longestcommonprefix(arr)<<endl;
    
    return 0;
}