#include <iostream>
#include <vector>
using namespace std;

bool arr[100000];
int k;

void fill_arr(int start, int len, vector<vector<int>> &v){
    if(k == len) return;
    for(int c : v[start]){
        arr[c] = true;
        fill_arr(c, len+1, v);
    }
}

int main(){
    int n, e, in1, in2, maxx = -1; cin >> n >> e >> k;
    vector<vector<int>> v(n);
    while(e--){
        cin >> in1 >> in2;
        v[in1].push_back(in2);
        v[in2].push_back(in1);
    }
    for(int q = 0; q < n; q++){
        arr[q] = true;
        fill_arr(q, 0, v);
        int count = 0;
        for(int a = 0; a < n; a++){
            if(arr[a]){
                arr[a] = false;
                count++;
            }
            maxx = max(maxx, count);
        }
    }
    cout << maxx;
}