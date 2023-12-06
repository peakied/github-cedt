#include <iostream>
#include <string>
using namespace std;

int main(){
    int i; cin >> i;
    int a[i], b[i];
    string in;
    for(int u = 0; u < i; u++){
        cin >> a[u];
        cin >> b[u];
    }
    cin >> in;
    int min, minin, max, maxin;
    if(in == "Zig-Zag"){
        min = a[0], max = b[0];
    }else min = b[0], max = a[0];;
    for(int u = 0; u < i; u++){
        if(in == "Zig-Zag"){
            if(u%2 == 0){
                minin = a[u];
                maxin = b[u];
            }else{
                minin = b[u];
                maxin = a[u];
            }
        }else{
            if(u%2 == 0){
                minin = b[u];
                maxin = a[u];
            }else{
                minin = a[u];
                maxin = b[u];
            }
        }
        if(min > minin){
            min = minin;
        }
        if(max < maxin){
            max = maxin;
        }
    }
    cout << min << ' ' << max;
}