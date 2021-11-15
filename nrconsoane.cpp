#include<iostream>
#include <cstring>
using namespace std;

int main(){
    char s[100];
    int nr;
    cin.get(s,100);
    for(int i=0; i<strlen(s); i++)
    if(strchr("aeiou",s[i])!=0){
        //daca egalez cu 0 atunci numara consoanele
        nr++;
    }
    cout<<nr;
    return 0;
}