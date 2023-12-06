#include <iostream>
#include <utility>
#include <climits>
#include <vector>
using namespace std;

int main(){
    int N, E, s; cin >> N >> E >> s;
    vector<pair<pair<int, int>, int>> v(N);
    int a, b, c;
    for(int i = 0; i < E; i++){
        cin >> a >> b >> c;
        v.push_back({{a, b}, c});
    }
    vector<int> dist(N, 100000);
    dist[s] = 0;
    for(int i = 0; i < N-1; i++) for(auto z : v) if(dist[z.first.second] > dist[z.first.first] + z.second) dist[z.first.second] = dist[z.first.first] + z.second;
    bool check = true;
    for(auto z : v) if(dist[z.first.second] > dist[z.first.first] + z.second){cout << "-1"; check = false; return 0;}
    if(check) for(auto z : dist) cout << z << ' ';
}