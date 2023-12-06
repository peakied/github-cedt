#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    map<string, vector<string>> code;
    vector<string> nameall, nameout;
    int i, check = 0; cin >> i;
    string name, in;
    for(int u = 0; u < i; u++){
        cin >> name;
        while(cin >> in && in != "*"){
            if(code.find(name) == code.end()) nameall.push_back(name);
            code[name].push_back(in);
        }
    }
    cin >> name;
    for(string c : nameall){
        if(c != name){
            for(string q : code[c]){
                for(string u : code[name]){
                    if(q == u){
                        if(find(nameout.begin(), nameout.end(), c) == nameout.end()) nameout.push_back(c);
                        check = 1;
                        break;
                    }
                }
            }
        }
    }
    for(string c : nameout) cout << ">> " << c << endl;
    if(check == 0) cout << ">> Not Found";
}