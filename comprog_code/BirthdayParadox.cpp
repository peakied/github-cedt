#include <iostream>
#include <string>
using namespace std;
int main(){
    float p; cin >> p;
    double k = 1, t = 1;
    t = (t*(365-(k-1)))/365;
    while (!(1-t >= p)){
        k++;
        t *= (365-(k-1))/365;
    }
    cout << k;
}