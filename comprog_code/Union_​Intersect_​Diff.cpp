#include <bits/stdc++.h>
using namespace std;

int main(){
    set<string> u, inter, d, interpause;
    string in, o;
    int len = 0, check = 0;
    getline(cin >> ws, in);
    in+= ' ';
    for(char i : in){
        if(i != ' '){
            o += i;
            len++;
        }else{
            u.insert(o);
            inter.insert(o);
            d.insert(o);
            o = "";
        }
        len++;
    }
    while(getline(cin >> ws, in)){
        in+= ' ';
        for(char i : in){
            if(i != ' '){
                o += i;
                len++;
            }else{
                u.insert(o);
                interpause.insert(o);
                d.erase(o);
                o = "";
            }
            len++;
        }
        set<string> pause(inter);
        for(string o : pause){
            if(interpause.find(o) == interpause.end()) inter.erase(o);
        }
        interpause.clear();
    }
    cout << "U: ";
    if(u.begin() == u.end()) cout << "empty set";
    for(string o : u) cout << o << ' ';
    cout << endl;
    cout << "I: ";
    if(inter.begin() == inter.end()) cout << "empty set";
    for(string o : inter) cout << o << ' ';
    cout << endl;
    cout << "D: ";
    if(d.begin() == d.end()) cout << "empty set";
    for(string o : d) cout << o << ' ';
    cout << endl;
}