#include <iostream>
#include <vector>
using namespace std;

int arr[1000];
bool check = true;

void fill_arr(int start, int p, vector<int> v[]){
    if(arr[start]){
        check = false;
        return;
    }
    arr[start] = 1;
    for(int c : v[start]){
        if(c == p) continue;
        fill_arr(c, start, v);
    }
}

int main(){
    int n, V, e, in1, in2; cin >> n;
    while(n--){
        cin >> V >> e;
        vector<int> v[V];
        while(e--){
            cin >> in1 >> in2;
            v[in1].push_back(in2);
            v[in2].push_back(in1);
        }
        for(int q = 0; q < V; q++){
            if(arr[q]) continue;
            fill_arr(q, -1, v);
        }
        if(check) cout << "NO\n";
        else cout << "YES\n";
        check = true;
        for(int q = 0; q < V; q++) arr[q] = 0;
    }
}