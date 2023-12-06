#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double n;
    cin >> n;
    if(n < 0){
        cout << "";
    }
    else if(n < 995){
        if(n < 10){
            cout << round(n*1)/1.0;
        }
        else{
        cout << n;
        }
    }
    else if(n < 995000){
        n /= 1000;
        if(n >= 10){
            cout << round((n)*1)/1.0 << "K";
        }else  cout << round((n)*10)/10.0 << "K";
    }
    else if(n < 995000000){
        n /= 1000000;
        if(n >= 10){
            cout << round((n)*1)/1.0 << "M";
        }else  cout << round((n)*10)/10.0 << "M";
    }
    else{
        n /= 1000000000;
        if(round((n)*10)/10.0 >= 10){
            cout << round((n)*1)/1.0 << "B";
        }else  cout << round((n)*10)/10.0 << "B";
    }
}