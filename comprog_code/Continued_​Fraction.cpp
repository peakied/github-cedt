#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int i, u = 0, c; cin >> i;
    int a[i];
    long double out;
    while(u < i){
        cin >> a[u];
        u++;
    }
    u = 0;
    c = i;
    while(u < c){
        i = u;
        out = a[u];
        while(0 < i){
            out = a[i-1]+(1/out);
            i--;
        }
        cout << setprecision(10) << out << endl;
        u++;
    }
}