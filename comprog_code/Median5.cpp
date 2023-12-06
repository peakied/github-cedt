#include <iostream>
using namespace std;
int main(){
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e;
    if(a > b){
        f = a;
        a = b;
        b = f;
    }
    if(c > d){
        f = d;
        d = c;
        c = f;
    }
    if(a > c){
        f = d;
        d = b;
        b = f;
        c = a;
    }
    a = e;
    if(a > b){
        f = a;
        a = b;
        b = f;
    }
    if(c > a){
        f = d;
        d = b;
        b = f;
        a = c;
    }
    if(a > d){
        cout << d;
    }else{
        cout << a;
    } 
}   