#include <iostream>
using namespace std;

int main(){
    string line; cin >> line;
    int check = 0, len = line.length();
    for(int i = 0; i < len; i++){
        if(check == 1 && i != len-1){
            cout << ", ";
            check = 0;
        }else if(line[i] >= 'A' && line[i] <= 'Z' && i != 0){
            cout << ", ";
        }else if(line[i] >= '0' && line[i] <= '9'){
            if(!(line[i+1] >= '0' && line[i+1] <= '9') && i != 0){
                check = 1;
            }
            if(!(line[i-1] >= '0' && line[i-1] <= '9') && i != 0){
                cout << ", ";
            }
        }
        cout << line[i];
        
    }
}