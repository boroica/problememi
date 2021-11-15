#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int A[5],i,n;
    for(i=0; i<n; i++)
    cin>>A[i];
    
    sort(A,A+n);

    for(i=0; i<n; i++)
    cout<<A[i];

}