/*Problem Statement: Given an input string, containing upper-case and lower-case letters, digits, 
and spaces( ' ' ). A word is defined as a sequence of non-space characters.
 The words in s are separated by at least one space. Return a string with the words in reverse order, 
 concatenated by a single space.*/
 //eg:Input: s = "welcome to the jungle"Output: "jungle the to welcome"
 #include<iostream>
#include<string>
#include<algorithm>
 using namespace std;
 int main() {
    string s;
    cout<<"enter string"<<endl;
    getline(cin,s);
    reverse(s.begin(),s.end()); // string reverse krne ka func.
    int n = s.length();
    string result = "";
    for(int i = 0;i<n;i++){
        string word = "";
        while(i<n && s[i] != ' '){
            word += s[i];
            i++;
        }
        reverse(word.begin(),word.end()); //word reverse krne ka func.
        if(word.length() > 0){
            result += " " + word;
        }
    }
    
    cout << result << endl;
    return 0;
 }
