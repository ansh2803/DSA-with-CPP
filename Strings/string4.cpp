//Roman Number to Integer
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
   int num;
   cout<<"enter number"<<endl;
   cin>>num;
  static vector<int> values = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
  static vector<string> symbol = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
   string result = "";  
for(int i=0;i<13;i++){
    if(num == 0){
        break;
    }
    int times = num/values[i];
    for(int j=0;j<times;j++){
        result += symbol[i];
        num -= values[i];
}
}
cout<<result<<endl;

    return 0;
}