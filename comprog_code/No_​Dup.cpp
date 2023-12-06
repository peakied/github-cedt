#include <iostream>
#include <set>
using namespace std;

int main(){
    set<string> in;
    string i;
    int len = 0, check = 0;
    while(cin >> i){
        in.insert(i);
        if(len == in.size()){
            check = 1;
            break;
        }
        len++;
    }
    if(check != 0) cout << len+1;
    else cout << -1;
}