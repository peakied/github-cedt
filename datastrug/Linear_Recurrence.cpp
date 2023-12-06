#include <iostream>

using namespace std;

int k;

int recur(int n, int c[], int a[], int out[]){
    if(n < k) return a[n];
    int count = 0, num = 1;
    for(int i = n-1; i >= n-k; i--){
        if(out[i] == -1) out[i] = recur(i, c, a, out);
        count += c[num++]*out[i];
    }
    return count%32717;
}

int main(){
    int n; cin >> k >> n;
    int c[k+1], a[k], out[n];
    for(int i = 0; i < n; i++) out[i] = -1;
    for(int i = 1; i <= k; i++){
        cin >> c[i];
    }
    for(int i = 0; i < k; i++){
        cin >> a[i];
    }
    cout << recur(n, c, a, out);
}