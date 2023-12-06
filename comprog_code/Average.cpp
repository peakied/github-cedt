#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double all = 0, in, i = 0;
    cin >> in;
    while (in != -1){
        all += in;
        cin >> in;
        i++;
    }
    if(all != 0){
        cout << round((all/i)*100)/100;
    }else cout << "No Data";

    
}