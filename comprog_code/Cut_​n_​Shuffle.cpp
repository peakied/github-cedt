#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
    int i, u = 0; cin >> i;
    string a[i], b[i], line;
    while(u < i){
        cin >> a[u];
        u++;
    }
    getline(cin, line);
    getline(cin, line);
    for(u = 0; u < line.length(); u++){
        if(line[u] == 'C'){
            for(int c = 0; c < i; c++){
                if(c >= i/2){
                    b[c-i/2] = a[c];
                }else b[c+i/2] = a[c];
            }
        }else if(line[u] == 'S'){
            for(int c = 0; c < i; c++){
                if(c >= i/2){
                    b[(c-i/2)*2+1] = a[c];
                }else b[2*c] = a[c];
            }
        }
        for(int c = 0; c < i; c++){
            a[c] = b[c];
        }
        
    }
    for(u = 0; u < i; u++){
        cout << b[u] << " ";
    }
}