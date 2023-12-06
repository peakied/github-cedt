#include <iostream>
using namespace std;

int main(){
    string x, y; cin >> x >> y;
    int lenx = x.length(), leny = y.length();
    int high[lenx+leny], max = 0, maxpo = 0;
    for(int i = 0; i < lenx+leny; i++){
        high[i] = 0;
    }
    for(int i = 0; i < lenx; i++){
        for(int u = 0; u < x.length(); u++){
            if(x[u] == y[u+i]){
                high[i]++;
            }
        }
    }
    for(int i = 0; i < leny; i++){
        for(int u = 0; u < leny; u++){
            if(y[u] == x[u+i]){
                high[i+lenx]++;
            }
        }
    }
    for(int i = 0; i < (lenx+leny); i++){
        if(max < high[i]){
            max = high[i];
            maxpo = i;
        }
    }
    if(maxpo < lenx){
        for(int i = 0; i < maxpo; i++){
            cout << '-';
        }
        cout << x << endl;
        cout << y << endl;
    }else{
        cout << x << endl;
        for(int i = maxpo-lenx; 0 < i; i--){
            cout << '-';
        }
        cout << y << endl;
    }
    cout << max;
}