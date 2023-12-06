#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<string> in, out;
    string loop, pause; cin >> loop;
    loop += '$';
    int len = loop.length();
    in.push_back(loop);
    for(char i : loop){
        out.push_back(in[0]);
        in[0] = in[0].substr(1, len)+in[0][0];
    }
    sort(out.begin(), out.end());
    for(int i = 0; i < len; i++){
        cout << out[i][len-1];
    }
}