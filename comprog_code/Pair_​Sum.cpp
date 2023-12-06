#include <iostream>
#include <set>
using namespace std;

int main(){
    set<int> in;
    int i, max, count = 0; cin >> max;
    while(cin >> i){
        if(i > max) continue;
        if(in.find(max-i) != in.end()) count++;
        in.insert(i);
    }
    cout << count;
}