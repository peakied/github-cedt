#include <iostream>
#include <map>
#include <vector>

using namespace std;

int arr[10000];

void clear_map(vector<vector<int>> &m, int &q){
    int tem;
    arr[q] = 0;
    if(!m[q].empty()){
        for(int &c : m[q]){
            tem = c;
            c = 0;
            clear_map(m, tem);
        }
        q = 0;
    }
}

int main(){
    int v, e, in1, in2, temp; cin >> v >> e;
    int count = 0;
    vector<vector<int>> m(v+1,vector<int>());
    for(int q = 0; q < v; q++) arr[q+1] = 1;
    while(e--){
        cin >> in1 >> in2;
        m[in1].push_back(in2);
    }
    for(int q = 1; q < v+1; q++){
        if(arr[q] == 1){
            clear_map(m, q);
            count++;
            continue;
        }
    }
    cout << count;
}