#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int main(){
    int n, m, k, w, input, power, sum = 0; cin >> n >> m >> k >> w;
    vector<int> tower;
    vector<pair<int, int>> monster;
    while(m--){
        cin >> input;
        monster.push_back(make_pair(input,0));
    }
    sort(monster.begin(), monster.end());
    for(auto &i : monster){
        cin >> power;
        i.second = power;
        sum += power;
    }
    while(k--){
        cin >> input;
        tower.push_back(input);
    }
    sort(tower.begin(), tower.end());
    for(auto start : tower){
        for(auto &i : monster){
            if(i.first >= start-w && i.first <= start+w && i.second != 0){
                i.second--;
                sum--;
                break;
            }
        }
    }
    cout << sum;
}