#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    long long int n, m, k, in;
    vector<long long int> cell;
    cin >> n >> m >> k;
    while(n--){
        cin >> in;
        cell.push_back(in);
    }
    sort(cell.begin(), cell.end());
    while(m--){
        cin >> in;
        cout << lower_bound(cell.begin(),cell.end(),in+1+k)-(lower_bound(cell.begin(),cell.end(),in-k)) << ' ';
    }
    
}