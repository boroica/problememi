#include <iostream>
using namespace std;

int main(){
    int n,p=0;
    cin>>n;
    while(n){
         if(n%10%2==0){
             p++;
         }
         n/=10;
    }
    cout<<p;
}