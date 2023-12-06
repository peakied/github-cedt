#include <iostream>
#include <map>
using namespace std;

int main(){
    map<string, double> price, out;
    double i, cost; cin >> i;
    string name;
    for(int u = 0; u < i; u++){
        cin >> name >> cost;
        price[name] = cost;
        out[name] = 0;
    }
    cin >> i;
    for(int u = 0; u < i; u++){
        cin >> name >> cost;
        if(price.find(name) != price.end()) out[name] += price[name]*cost;
    }
    cost = 0;
    double max = out[name];
    for(pair<string, double> i : out){
        if(max < i.second) max = i.second;
        cost += i.second;
    }
    if(cost != 0){
        cout << "Total ice cream sales: " << cost << endl;
        cout << "Top sales: ";
        for(pair<string, double> i : out){
            if(max == i.second) cout << i.first << ' ';
            cost = 0;
        }
    }else cout << "No ice cream sales";
}