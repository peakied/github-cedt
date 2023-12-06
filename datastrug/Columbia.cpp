#include <iostream>
#include <queue>
#include <climits>
#include <utility>

using namespace std;
typedef long long ll;

int main(){
    int R, C; cin >> R >> C;
    ll dist[R][C], arr[R][C];
    for(int c = 0; c < R; c++){
        for(int q = 0; q < C; q++){
            cin >> arr[c][q];
            dist[c][q] = LLONG_MAX;
        }
    }
    int check[5] = {0, 1, 0, -1, 0};
    queue<pair<ll, ll>> q;
    q.push({0,0});
    dist[0][0] = 0;
    while(!q.empty()){
        ll x = q.front().first;
        ll y = q.front().second;
        q.pop();
        for(int i = 0; i < 4; i++){
            if(x+check[i] >= R || x+check[i] < 0 || y+check[i+1] >= C || y+check[i+1] < 0) continue;
            else if (dist[x+check[i]][y+check[i+1]] > dist[x][y]+arr[x+check[i]][y+check[i+1]]){
                q.push({x+check[i], y+check[i+1]});
                dist[x+check[i]][y+check[i+1]] = dist[x][y]+arr[x+check[i]][y+check[i+1]];
            }
            
        }
    }
    for(int i = 0; i < R; i++){
        for(int q = 0; q < C; q++){
            cout << dist[i][q] << ' ';
        }
        cout << endl;
    }
}