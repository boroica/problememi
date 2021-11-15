#include <iostream>
using namespace std;
 
 int sumacif(int a){
    int s=0,b;
    while(a){
        b=a%10;
        if(b%10%2==0){
          s+=b;
        }
        a/=10;
    }
     return s;
 }

 int main(){
     int a;
     cin>>a;
     cout<<sumacif(a);
 }