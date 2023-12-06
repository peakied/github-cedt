#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    string ip1, cal1, calu1, ip2, cal2, calu2, com1, com2;
    double gpax1, gpax2;
    cin >> ip1 >> gpax1 >> com1 >> cal1 >> calu1 >> ip2 >> gpax2 >> com2 >> cal2 >> calu2;
    if(com1 == "A"&&(cal1 == "A"||cal1 == "B"||cal1 == "C")&&(calu1 == "A"||calu1 == "B"||calu1 == "C")){
      if(com2 == "A"&&(cal2 == "A"||cal2 == "B"||cal2 == "C")&&(calu2 == "A"||calu2 == "B"||calu2 == "C")){
        if(gpax2 == gpax1){
          if(cal1 == cal2){
            if(calu1 == calu2){
              cout << "Both";
            }
            else if(calu2 < calu1){
              cout << ip2;
            }
            else{
              cout << ip1;
            }
          }
          else if(cal1 < cal2){
            cout << ip1;
          }
          else cout << ip2;
        }
        else if(gpax2 > gpax1){
          cout << ip2;
        }
        else cout << ip1;
      }
      else cout << ip1;
    }
    else if(com2 == "A"&&(cal2 == "A"||cal2 == "B"||cal2 == "C")&&(calu2 == "A"||calu2 == "B"||calu2 == "C")){
      cout << ip2;
    }
    else{
      cout << "None";
    }

    return 0;
}