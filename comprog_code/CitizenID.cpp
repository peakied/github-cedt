#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() 
{
    int coop[12];
    string code;
    cin >> code;
    for(int i = 0; i < 12; i++){
      coop[i] = int(code[i])-48;
    }
    for(int i = 0; i < 12; i++){
      cout << coop[i];
      if(i == 0|| i == 9 || i == 4 || i == 11){
        cout << "-";
      }
    }
    cout << (11-(13*coop[0]+12*coop[1]+11*coop[2]+10*coop[3]+9*coop[4]+8*coop[5]+7*coop[6]+6*coop[7]+5*coop[8]+4*coop[9]+3*coop[10]+2*coop[11])%11)%10;
    return 0;
}