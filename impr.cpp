#include <iostream>
using namespace std;
int main()
{
     int x,min=10;
     cin>>x;
     while(x)
    {
        if(x%10<min && x%10%2 ==1){
            min = x%10;

        }
        x/=10;
    }
     cout<<min;
     return 0;
}
