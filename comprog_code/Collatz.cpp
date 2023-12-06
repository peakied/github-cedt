#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> cell;
    int len = 0, i; cin >> i;
    cell.push_back(i);
    while(cell[len] != 1){
        if(cell[len]%2 == 0) cell.push_back(cell[len]/2);
        else cell.push_back(cell[len]*3+1);
        len++;
    }
    if(len >14) i = cell.size()-14;
    else i = 1;
    cout << cell[i-1];
    for(; i < len+1; i++) cout << "->" << cell[i];
}