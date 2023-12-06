#include <iostream>
#include <string>
using namespace std;

int main(){
    string sen; cin >> sen;
    int i = 0, len, checkin; cin >> checkin;
    len = sen.length();
    while(i < len){
        if(sen[i] == sen[i+1]){
            int check = 2;
            while(sen[i+check-1] == sen[i+check]){
                check++;
            }
            if(check >= checkin){
                i += check-1;
            }else cout << sen[i];
        }else cout << sen[i];
        i++;
    }
}