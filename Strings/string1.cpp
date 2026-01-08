
/*#include<iostream>
using namespace std;
int main(){
    // Count vowels and consonants in a string
    cout<<"enter string"<<endl;
    string s;
    cin >> s;
    int vowels = 0, consonants = 0;
    for(char c : s){
        if(c>= 'a' && c<= 'z'){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
           c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
            vowels++;
        }
        else{
            consonants++;
        }
    }
        
    }
    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    return 0;
}*/
/*#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"enter string"<<endl;
    // string length without using length() function
    cin >> s;
    int count = 0;
    for(char c : s){
        count++;
    }
    cout << count << endl;
}*/
/*#include<iostream>
using namespace std;
int main(){
    // cout << "Hello, World!" << endl;
    //taking string input and printing each character in new line
    string s;
    cin >> s;
    // cout << s << endl;
    for(int i = 0;i< s.length();i++){
        cout <<s[i]<<endl;
    }
    return 0;
}*/