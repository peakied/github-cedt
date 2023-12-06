#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    int i, in, counthigh = 0, countlow = 0, count = 0, out = 0; cin >> i;
    while(i--){
        cin >> in;
        v.push_back(in);
        if(in == 3) counthigh++;
        if(in == 1) countlow++;
    }
    int q, countloop = counthigh;
    for(i = v.size()-1; counthigh != 0; i--){
        if(counthigh == 0) break;
        if(v[i] != 3){
            if(v[i] == 2) q = countlow+1;
            else q = 0;
            for(; q < v.size(); q++){
                if(v[q] == 3){
                    swap(v[i], v[q]);
                    out++;
                    break;
                }
                if(q == v.size()-countloop-1) q = 0;
            }
        }
        counthigh--;
    }
    for(i = 0; countlow != 0; i++){
        if(v[i] != 1){
            for(q = v.size()-1;q >= 0 ; q--){
                if(v[q] == 1){
                    swap(v[i], v[q]);
                    out++;
                    break;
                }
            }
        }
        countlow--;
    }
    cout << out << endl;
}