#include <iostream>
using namespace std;

long long int faction(int po){
    long long int fact = 1;
    for(int i = 0; i < po; i++){
        fact *= 10;
    }
    return fact;
}


long long int plusall(long long int num, long long int out){
    int len = to_string(num).length();
    for(int i = 0; i < len-1; i++){
        out += 9*faction(i)*(i+1);
    }
    out += (num - (faction(len-1)-1))*len + 1;
    return out;
}


int main(){
    long long int num1, num2, out = 0, out2 = 0;
    int leng;
    cin >> num1 >> num2;
    out = plusall(num2, out);
    out2 = plusall(num1, out2);
    cout << out - out2 + to_string(num1).length();
}