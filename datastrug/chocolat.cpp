#include <iostream>
#include <set>
using namespace std;

typedef unsigned long long ll;

int main() 
{
    ll i, n, in, arr[1000003], k = 1000003, q = 2; cin >> i >> n;
    set<ll> s;
    arr[0] = 1;
    arr[1] = 1;
    while(n--){
        cin >> in;
        s.insert(in);
    }
    for(; q < i+1; q++){
        arr[q] = 0;
        for(ll c : s){
            if(q < c){
                continue;
            }
            arr[q] += arr[q-c]%k;
        }
        arr[q] = arr[q]%k;
    }
    cout << arr[q-1];
}