#include <iostream>
using namespace std;

int sumfactcif(int n){
   int s=0,i;
   if(n==0) return 1;
   else{
       while(n!=0){
           int p=1;
           for (i=1;i<=n%10; i++)
           p=p*i;
           s=s+p;
           n=n/10;
       }
       return s;
   }
}

int main(){
    int n;
    cin>>n;
    cout<<sumfactcif(n);
}