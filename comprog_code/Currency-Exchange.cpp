#include <iostream>
#include <map>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    map<string, double> trade = {{"THB", 1.00}};
    double i, cost; cin >> i;
    string country, countrypast;
    for(int u = 0; u < i; u++){
        cin >> country >> cost;
        trade[country] = cost;
    }
    int costout;
    cin >> costout;
    cin >> country;
    cout << costout << ' ' << country;
    countrypast = country;
    while(cin >> country){
        costout = (costout*trade[countrypast])/trade[country];
        cout << " -> " << costout << ' ' << country;
        countrypast = country;
    }
}