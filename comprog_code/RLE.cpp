#include <iostream>
#include <string>
using namespace std;
int main(){
    string sent;
    int i = 0, numa, a = 0;
    cin >> sent;
    numa = sent[0];
    while(i < sent.length()){
        if(numa == sent[i]){
            a++;
        }else{
            cout << sent[i-1] << " " << a << " ";
            a = 1;
            numa = sent[i];
        }
        i++;
    }
    cout << sent[i-1] << " "  << a << " ";
}