#include <iostream>
using namespace std;

int main(){
    int i, check = 0, c = 0, zero; cin >> i;
    int cell[(i*i)];
    for(int u = 0; u < i*i; u++){
        cin >> cell[u];
        if(cell[u] == 0){
            zero = u;
        }
    }
    for(int u = i*i; 0 < u-1; u--){
        for(int d = c; d < i*i-1; d++){
            if(cell[c] != 0 && cell[d+1] != 0){
                if(cell[c] > cell[d+1]){
                    check++;
                }
            }
        }
        c++;
    }
    if((zero+1)%i != 0 && i%2 == 0){
        check++;
    }
    if(check%2 == 0){
        cout << "YES";
    }else cout << "NO";
}