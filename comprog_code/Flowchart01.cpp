#include <iostream>
using namespace std;
int main(){
    int a, b, c, d, f;
    cin >> a >> b >> c >> d;
    if(a > b){
        f = a;
        a = b;
        b = f;
        if(d >= a){
            if(c > d){
                c -= a;
            }
        }else c += a;
        b = a + c + d;
    }
    else{
        if(c > a && a >= b){
            d += a;
        }
        if(d > c){
            b += 2;
        }else b *= 2;
    }
    cout << a << " " << b << " " << c << " " << d;
}