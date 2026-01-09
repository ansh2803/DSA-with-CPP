//Longest palindromic substring
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    // int left = 0, right = s.length() - 1;
    for(int i = 0;i<s.length();i++){
        for(int j = i+1;j<s.length();j++){
            string sub = s.substr(i,j-i+1);
            string rev = sub;
            reverse(rev.begin(),rev.end());
            if(sub == rev){
                cout<<sub<<endl;
            }
        }
    }
   
    return 0;
}
