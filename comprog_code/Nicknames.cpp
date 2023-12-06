#include <iostream>
using namespace std;

int main(){
    string nic, name[20] = {"Robert", "William", "James", "John", "Margaret", "Edward", "Sarah", "Andrew", "Anthony", "Deborah", "Dick", "Bill", "Jim", "Jack", "Peggy", "Ed", "Sally", "Andy", "Tony", "Debbie"};
    int i; cin >> i;
    for(int u = 0; u < i; u++){
        cin >> nic;
        int check = 0;
        for(int c = 0; c < 20; c++){
            if(name[c] == nic){
                if(c <= 9){
                    cout << name[c+10] << endl;
                    check = 1;
                    break;
                }else{ 
                    cout << name[c-10] << endl;
                    check = 1;
                    break;
                }
            }
        }
        if(check == 0){
            cout << "Not found\n";
        }
    }
}