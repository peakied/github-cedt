#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double i = 0, a, x, m;
    cin >> a;
    x = (i+a)/2;
    m = a;
    while(!(abs(a - pow(10,x)) <= pow(10,-10)*max(a,pow(10,x)))){
        if(pow(10,x) > a){
            m = x;
            x = (i+x)/2;
        }
        if(pow(10,x) < a){
            x = (x+m)/2;
        }

    }
    cout << x;
}