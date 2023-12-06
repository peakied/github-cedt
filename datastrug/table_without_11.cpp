#include <iostream>

using namespace std;

int main(){
    long long in, k = 100000007, tem, out = 3, num = 1;
    cin >> in;
    in--;
    while(in--){
        tem = out;
        out = (out*2+num)%k;
        num = tem%k;
    }
    cout << out;
}