#include <iostream>
#include <cmath>

#include <string>
using namespace std;
long gcd(long a, long b) {
 if (b == 0) return a;
 return gcd(b, a%b);
}
int main(){
    string a, b, c, h;
    int mid, top, bottom;
    cin >> a >> b >> c;
    for(int i = 0; i < c.length(); i++){
        h = h + "9";
    }
    top = stoi(b+c) - stoi(b);
    bottom = stoi(h)*pow(10,b.length());
    mid = gcd(top,bottom);
    top = top + (stoi(a)*bottom);
    top /= mid;
    bottom /= mid;
    cout << top << " / " << bottom;
}