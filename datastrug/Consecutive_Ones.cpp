#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

vector<string> v;

void check(pair<string, int> p, int &i, int &k, int count){
    if(p.second != i){
        check(make_pair(p.first+"1", p.second+1), i, k, count+1);
        if(count < k) check(make_pair(p.first+"0", p.second+1), i, k, 0);
        else check(make_pair(p.first+"0", p.second+1), i, k, p.second+1);
    }else{
        if(count >= k){
          v.push_back(p.first);
        }
    }
    
}


int main(){
    int i, k; cin >> i >> k;
    check(make_pair("",0), i, k, 0);
    sort(v.begin(), v.end());
    for(string q : v) cout << q << endl;
}