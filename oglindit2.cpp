int oglindit(int n){
    int o=0;
    while(n){
        o=n%10+o*10;
        n/=10;
    }
    return o;
}