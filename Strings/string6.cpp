/*Remove character from first string which are present in second string
eg: first string = "abcde", second string = "cde" then result = "ab"*/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str1, str2;
    getline(cin,str1);
    getline(cin,str2);
    for(int i = 0;i<str2.length();i++){
        str1.erase(remove(str1.begin(), str1.end(), str2[i]), str1.end());
    }
    cout<<str1;
    return 0;
}