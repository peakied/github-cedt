#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main(){
    map<string, vector<string>> name;
    vector<string> c, out;
    string namein, spicy;
    cin >> namein >> spicy;
    out.push_back(spicy);
    name[spicy].push_back(namein);
    while(cin >> namein >> spicy){
        if(name.find(spicy) == name.end()) out.push_back(spicy);
        name[spicy].push_back(namein);
    }
    for(auto i : out){
        cout << i << ": ";
        for(auto c : name[i]){
          cout << c << ' ';
        }
        cout << endl;
    }
}