#include <iostream>
#include <string>
using namespace std;

int out100(int i, int c, string strin, string na[]){
    int wow = 0, check = 1;
    for(int u = i; 0 < u; u--){
        if(u == 3){
            if(strin[c] != '0'){
                cout << na[(strin[c]-'0')] << ' ' << na[28] << ' ';
            }
        }
        if(u == 2){
            if(strin[c+1] != '0'){
                if(strin[c+1] == '1'){
                    cout << na[10+(strin[c+2]-'0')] << ' ';
                    wow = 1;
                }else if(strin[c+1] != '0'){
                    cout << na[18+(strin[c+1]-'0')] << ' ';
                }
            }
        }
        if(u == 1 && wow == 0 && strin[c+2] != '0'){
            cout << na[strin[c+2]-'0'] << ' ';
        }
    }
    if(strin[c] == '0' && strin[c+1] == '0' && strin[c+2] == '0'){
        check = 0;
    }
    return check;
}

int main(){
    string strin, na[33] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety", "hundred", "thousand", "million", "billion", "trillion"};
    long long int in, in2, len;
    cin >> in;
    in2 = in;
    strin = to_string(in);
    len = strin.length();
    if(len == 1){
        cout << na[strin[0]-'0'];
    }else{
        int check = 0;
        if(len%3 != 0){
            for(int u = len%3; 0 < u; u--){
                if(u == 2){
                    if(strin[0] == '1'){
                        cout << na[10+(strin[1]-'0')] << ' ';
                        check = 1;
                    }else cout << na[18+(strin[0]-'0')] << ' ';
                }else if(u == 1 && check == 0 && strin[1] != '0'){
                    cout << na[strin[0]-'0'] << ' ';
                }
            }
            check = 1;
        }
        int lene = len%3, i = 0;
        for(int c = len/3; 0 < c; c--){
            if(check == 1){
                cout << na[28+c] << ' ';
            }
            check = out100(3, lene+i*3, strin, na);
            i++;
        }
    }
}