#include <iostream>
#include <set>
using namespace std;

int main(){
    set<string> win, lose;
    string in1, in2, check = "0";
    while(cin >> in1 >> in2){
        win.insert(in1);
        lose.insert(in2);
    }
    for(string i : win){
        if(lose.find(i) == lose.end()){
            cout << i << ' ';
            check = "1";
        }
    }
    if(check == "0") cout << "None";
}