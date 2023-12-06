#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    map<string, int> music;
    vector<string> nameall;
    vector<pair<int, string>> namesort;
    string tem, tem1, name, timein;
    int timeall = 0,len = 0;
    while(cin >> tem){
        cin >> tem >> name;
        cin >> timein;
        tem = "";
        for(char i : timein){
            if(i == ':'){
                timeall -= stoi(tem)*60;
                tem = "";
                continue;
            }
            tem += i;
        }
        timeall -= stoi(tem);
        if(music.find(name) == music.end()){
            music[name] = timeall;
            nameall.push_back(name);
        }
        else music[name] += timeall;
        timeall = 0;
    }
    for(string i : nameall) namesort.push_back(make_pair(music[i], i));
    sort(namesort.begin(), namesort.end());
    for(pair<int, string> i : namesort){
        if(len == 3) break;
        cout << i.second << " --> " << -i.first/60 << ':' << -i.first%60 << endl;
        len++;
    }
}