#include <iostream>
using namespace std;

int mod(int a, int k, int m){
    if(k == 0) return 1;
    if(k%2 == 1) return a*(mod(a, k/2, m)*mod(a, k/2, m))%m;
    else return (mod(a, k/2, m)*mod(a, k/2, m))%m;
}

int main(){
    int a, k, m; cin >> a >> k >> m;
    cout << mod(a, k, m);
}