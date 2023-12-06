#include <iostream>
#include <string>
using namespace std;
int main(){
    int a, b, i = 0, max1, max2, min1, min2, r = 0, r1 = 0;
    cin >> a >> b;
    max1 = b;
    max2 = a;
    min1 = a;
    min2 = b;
    while(a != -999 && a != -998){
        if(r == 0){
            if(min1 > a){
                min1 = a;
            }
            if(max1 < b){
                max1 = b;
            }
            r = 1;
        }else if(r == 1){
            if(min1 > b){
                min1 = b;
            }
            if(max1 < a){
                max1 = a;
            }
            r = 0;
        }
        if(r1 == 0){
            if(min2 > b){
                min2 = b;
            }
            if(max2 < a){
                max2 = a;
            }
            r1 = 1;
        }else if(r1 == 1){
            if(min2 > a){
                min2 = a;
            }
            if(max2 < b){
                max2 = b;
            }
            r1 = 0;
        }
        cin >> a >> b;
        i++;
    }
    if(a == -998){
        cout << min1 << " " << max1;
    }else cout << min2 << " " << max2;

}