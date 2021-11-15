#include <iostream>
using namespace std;
 
 int fact(int n){
     int i,nr=1;
     for(i=1;i<=n; i++)
        nr=nr*i;
        
     return n;
 }

 int main(){
     int n;
     cin>>n;
     cout<<fact(n);

     return 0;
 }