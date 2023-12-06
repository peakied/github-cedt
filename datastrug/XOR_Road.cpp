#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

typedef unsigned long long ll;

vector<int> vs(2001, -1);
ll check(ll i){
    return (vs[i] == -1) ? i : (vs[i] = check(vs[i]));
}

int main(){
    int i; cin >> i;
    ll in, count = 0;
    vector<ll> v(i);
    vector<pair<ll, pair<ll, ll>>> sum;
    for(auto &a : v) cin >> a;
    for(int a = 0; a < i; a++) for(int b = 0; b < i; b++) sum.push_back({-(v[a]^v[b]), {a, b}});
    sort(sum.begin(), sum.end());
    for(auto &q : sum){
        ll setA = check(q.second.first), setB = check(q.second.second);
        if (setA != setB) vs[setA] = setB, count += -q.first;
    }
    cout << count;
}