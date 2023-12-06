#include <iostream>
#include <map>
using namespace std;

int main(){
    map<string, string> name;
    string nic1, nic2, num;
    int i; cin >> i;
    for(int u = 0; u < i; u++){
        cin >> nic1 >> nic2 >> num;
        nic1 += ' '+nic2;
        name[nic1] = num;
        name[num] = nic1;
    }
    cin >> i;
    getline(cin, nic1);
    for(int u = 0; u < i; u++){
        getline(cin, nic1);
        if(name.find(nic1) == name.end()){
            cout << nic1 << " --> " << "Not found" << endl;
            continue;
        }
        cout << nic1 << " --> " << name[nic1] << endl;
    }
}