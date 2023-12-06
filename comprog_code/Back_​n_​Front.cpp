#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> i;
    int c, l = 0;
    cin >> c;
    while(cin >> c){
        if(c == -1) break;
        auto itr = i.begin();
        if(l%2 == 0) i.push_back(c);
        else i.insert(itr, c); 
        l++;
    }
    cout << '[' << i[0];
    for(int q = 1; q < i.size()-1; q++) cout << ", " << i[q];
    cout << ", " << i[i.size()-1] << ']';
}