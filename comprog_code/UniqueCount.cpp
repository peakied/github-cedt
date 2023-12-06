#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> in;
    int i, len = 0;
    ////into vector
    while(cin >> i){
        in.push_back(i);
    }
    ////sort
    sort(in.begin(), in.end());
    int mix = in[0];
    for(int i = 0; i < in.size(); i++){
        if(mix != in[i]){
            len++;
            mix = in[i];
        }
    }
    cout << len+1 << endl;
    len = 0;
    mix = in[0];
    cout << mix;
    for(int i = 0; i < in.size(); i++){
        if(mix != in[i]){
            len++;
            mix = in[i];
            if(len <= 9) cout << ' ' << mix;
        }
    }
}