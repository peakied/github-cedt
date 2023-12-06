#include <iostream>
#include <vector>
#include <map>
using namespace std;

vector<string> out;

void shuffle(string st, int &i, int len, map<int ,int> link, vector<int> check){
    if(len == i){
        out.push_back(st);
        return;
    }
    for(int q = 0; q < i; q++){
        if(check[q] == 0){
            char temp = char(q+'0');
            if(link.find(q) != link.end()){
                check[link[q]]++;
                check[q]++;
                shuffle(st+temp, i, len+1, link, check);
                check[link[q]]--;
                check[q]--;
            }else{
              check[q]++;
              shuffle(st+temp, i, len+1, link, check);
              check[q]--;
            }
        }
    }
}

int main(){
    int i, k, in1, in2; cin >> i >> k;
    map<int, int> link;
    vector<int> check;
    for(int q = 0; q < i; q++) check.push_back(0);
    while(k--){
        cin >> in1 >> in2;
        check[in2]--;
        link[in1] = in2;
    }
    shuffle("", i, 0, link, check);
    for(auto a : out){
      for(auto q : a) cout << q << ' ';
      cout << "\n";
    }
}