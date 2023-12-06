#include <iostream>
using namespace std;

int main(){
    string in, in2;
    cin >> in;
    cin >> in2;
    int out = 0;
    while (in2 != "END"){
        int len1 = in.length();
        int len2 = in2.length();
        if(len2 < len1){
            for(int i = 0; i < len1-len2; i++){
                in2 = "0"+in2;
            }
        }else{
            for(int i = 0; i < len2-len1; i++){
                in = "0"+in;
            }
        }
        len1 = in.length();
        for(int i = len1-1; -1 < i; i--){
            out = in[i]-'0'+in2[i]-'0'+out;
            in[i] = out%10+'0';
            out /= 10;
        }
        if(out != 0){
            in = "1"+in;
            out = 0;
        }
        cin >> in2;
    }
    cout << in;
    
}