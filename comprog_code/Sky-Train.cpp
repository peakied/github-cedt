#include <iostream>
#include <map>
#include <set>
using namespace std;

int main(){
    map<string, set<string>> train;
    set<string> nameout;
    string name, out;
    while(cin >> name >> out){
        train[name].insert(out);
        train[out].insert(name);
    }
    nameout.insert(name);
    for(string out : train[name]){
        nameout.insert(out);
        for(string c : train[out]) nameout.insert(c);
    }
    for(string out : nameout) cout << out << endl;
}