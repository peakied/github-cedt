#include <iostream>
#include <string>
using namespace std;

int main(){
    string in, out; getline(cin, in);
    char a[10] = {'0','1','2','3','4','5','6','7','8','9'};
    int i = 0, c;
    while(i < 10){
        if(in.find(a[i]) == string::npos){
            out = out + to_string(i) + ',';
        }
        i++;
    }
    if(out.length() > 0){
        cout << out.substr(0,out.length()-1);
    }else cout << "None";
}