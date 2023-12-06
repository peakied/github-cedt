#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void sufle(int a[],int i, int q){
        int test, save = 0, b[i];
        for(int c = 0; c < i; c++){
            b[c] = a[abs(c-(i-1))];
        }
        for(int c = 0; c < i; c++){
            a[c] = b[c];
        }
        for(int c = 0; c < q; c++){
            cout << a[c] << ' ';
        }
        cout << endl;
}

int main(){
    int i; cin >> i;
    int a[i], b[i], stand;
    for(int u = 0; u < i; u++){
        cin >> a[u];
        cout << a[u] << ' ';
    }
    cout << endl;
    for(int u = 0; u < i; u++){
        int save = 0, check = 0, test = 0;
        for(int u = 0; u < i-1; u++){
            if(a[u] < a[u+1]){
                check++;
            }
            if(check == i-1){
                return 0;
            }
        }
        for(int d = i-u-1; -1 < d; d--){
            if(save < a[d]){
                test = d;
                save = a[d];
            }
        }
        if(test == i-u-1){
            
        }else{
            if(test != 0){
                sufle(a, test+1, i);
                sufle(a, i-u, i);
            }else sufle(a, i-u, i);
        }
    }
}