#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

int main(){
    vector<pair<double, string>> in;
    vector<double> cell;
    string i;
    double num;
    while(cin >> i){
        if(i == "END") break;
        cin >> num;
        in.push_back(make_pair(num, i));
    }
    int len = 0;
    for(int u = 0; u < in.size(); u++){
        cell.push_back(in[u].first);
        in[u].first = 0;
    }
    while(cin >> i){
        for(int u = 0; u < in.size(); u++){
            if(i == in[u].second){
                in[u].first -= cell[u];
                break;
            }
        }
    }
    sort(in.begin(), in.end());
    int check = 0;
    for(int u = 0; u < 3; u++){
      if(in[u].first != 0){
          cout << in[u].second << ' ' << -in[u].first << endl;
          check = 1;
      }
    }
    if(check == 0) cout << "No Sales";
}