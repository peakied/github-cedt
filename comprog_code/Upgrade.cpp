#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<pair<string, string>> in;
    string key, grade; 
    while(cin >> key){
        if(key == "q") break;
        cin >> grade;
        in.push_back(make_pair(key, grade));
    }
    while(cin >> grade){
        for(int u = 0; u < in.size(); u++){
            if(grade == in[u].first && in[u].second != "A"){
                if(in[u].second == "F"){
                    in[u].second = "D";
                    break;
                }
                if(in[u].second.length() == 1) in[u].second += "+";
                else in[u].second = char(in[u].second[0]-1);
            }
        }
    }
    for(pair<string, string> u : in) cout << u.first << ' ' << u.second << endl;
    
}