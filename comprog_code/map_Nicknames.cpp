#include <iostream>
#include <map>
using namespace std;

int main(){
    map<string, string> name;
    string nic1, nic2;
    int i; cin >> i;
    for(int u = 0; u < i; u++){
        cin >> nic1 >> nic2;
        name[nic1] = nic2;
        name[nic2] = nic1;
    }
    cin >> i;
    for(int u = 0; u < i; u++){
        cin >> nic1;
        if(name.find(nic1) == name.end()){
            cout << "Not found" << endl;
            continue;
        }
        cout << name[nic1] << endl;
    }
}