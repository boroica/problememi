#include <iostream>
using namespace std;
int main()
{
   int x,n=0;
   cin>>x;
   while(x!=0){
      x=x%10;
      n++;
   }
   cout<<n;
}
