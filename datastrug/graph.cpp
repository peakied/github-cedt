#include <iostream>
#include <map>
#include <vector>

using namespace std;

bool arr[10000];

bool clear_map(vector<vector<int>> &m, int &q){
    int tem;
    bool check = m[q].size()<3;
    arr[q] = true;
    if(!m[q].empty()){
        for(auto c : m[q]){
            if(!arr[c]) check = check&&clear_map(m, c);
        }
    }
    return check;
}

int main(){
    int v, e, in1, in2, temp; cin >> v >> e;
    int count = 0;
    vector<vector<int>> m(v,vector<int>());
    for(int q = 0; q < v; q++) arr[q] = false;
    while(e--){
        cin >> in1 >> in2;
        m[in1].push_back(in2);
        m[in2].push_back(in1);
    }
    for(int q = 0; q < v; q++){
        if(!arr[q]){
            if(clear_map(m, q)){
              count++;
            }
            continue;
        }
    }
    cout << count;
}