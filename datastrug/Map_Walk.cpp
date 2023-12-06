#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int map[11][11], R, C;
vector<string> v;

void create_map(int& R, int& C, bool down, bool up, string thing, int i, int j){
    if(i == R && j == C){
        v.push_back(thing);
        return;
    }
    if(down && map[i+1][j] == 0 && i+1 <= R) create_map(R, C, true, false, thing+"B", i+1, j);
    if(map[i][j+1] == 0 && j+1 <= C) create_map(R, C, true, true, thing+"A", i, j+1);
    if(up && map[i-1][j] == 0 && i-1 > 0) create_map(R, C, false, true, thing+"C", i-1, j);
}

int main(){
    int R, C; cin >> R >> C;
    for(int i = 1; i <= R; i++){
        for(int j = 1; j <= C; j++){
            cin >> map[i][j];
        }
    }
    create_map(R, C, true, true, "", 1, 1);
    sort(v.begin(), v.end());
    for(auto q : v){
        cout << q << endl;
    }
    cout << "DONE";
}