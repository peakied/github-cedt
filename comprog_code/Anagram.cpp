#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main(){
    vector<multiset<char>> c = {{},{}};
    string in;
    int i = 0;
    while(i != 2){
        getline(cin, in);
        for(char u : in){
            if(u != ' '){
                c[i].insert(char(tolower(u)));
            }
        }
        i++;
    }
    if(c[0] == c[1]) cout << "YES";
    else cout << "NO";
}