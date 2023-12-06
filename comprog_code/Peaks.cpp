#include <iostream>
using namespace std;

int main(){
    int i, u = 0, out = 0; cin >> i;
    int a[i];
    while(u < i){
        cin >> a[u];
        u++;
    }
    u = 0;
    while(u < i-2){
        if(a[u] < a[u+1] && a[u+1] > a[u+2]){
            out++;
        }
        u++;
    }
    cout << out;
}