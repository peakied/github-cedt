#include <iostream>
#include <set>
using namespace std;

void sub_root(set<int> &v, int in, int &max){
    if(in >= max) return;
    v.insert(in);
    sub_root(v, in*2+1, max);
    sub_root(v, in*2+2, max);
}

int main(){
    int max, in; cin >> max >> in;
    set<int> v;
    if(max != 0) sub_root(v, in, max);
    std::cout << max-v.size() << "\n";
    for(int i = 0; i < max; i++){
        if(v.find(i) != v.end()) continue;
        cout << i << " ";
    }
}

