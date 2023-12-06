#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, start; cin >> n >> m >> start;
    int in1, in2, money = start;
    map<int,int> all;
    vector<int> v(100000,0);
    while(n--){
        cin >> in1 >> in2;
        all[in1] = in2;
    }
    v[0] = start;
    for(int i = 1; i <= 100000; i++){
        if(all[i] != 0){
            money = all[i];
        }
        v[i] = v[i-1]+money;
    }
    while(m--){
        cin >> in1 >> in2;
        int ans = in1 + v[in2];
        if(in1 <= v[in2]){
            ans = in1;
        }
        int out = lower_bound(v.begin(),v.end(),ans) - v.begin();
        printf("%d ",out);
    }
}