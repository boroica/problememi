#include <iostream>
using namespace std;
 
  int main(){
      int n;
      cin>>n;
      long long nr=1;
      for(long long i=1;i<=n; i++)
           nr=nr*i;
     
     cout<<nr;
     return nr; 
  }