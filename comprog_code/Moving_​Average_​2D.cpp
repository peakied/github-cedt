#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int stake, len;
    cin >> stake >> len;
    double cell[stake][len];
    for(int i = 0; i < stake; i++){
        for(int u = 0; u < len; u++){
            cin >> cell[i][u];
        }
    }
    for(int i = 1; i < stake-1; i++){
        double out = 0;
        for(int u = 1; u < len-1; u++){
            cout << round(((cell[i-1][u-1] + cell[i-1][u] + cell[i-1][u+1] + cell[i][u-1] + cell[i][u] + cell[i][u+1] + cell[i+1][u-1] + cell[i+1][u] + cell[i+1][u+1])/9)*100)/100.0 << ' ';
        }
        cout << endl;
    }
}