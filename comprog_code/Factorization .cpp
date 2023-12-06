#include <iostream>
#include <string>
using namespace std;
int main(){
  long int in,k = 1, x = 0, y;
  cin >> in;
  y = in/2;
  while(k < y){
    k++;
    while(in%k == 0){
        if(x == 0){
            x = 1;
            cout << k;
        }else cout << "*" << k;
        in /= k;
        if(in == 1){
            break;
        }
    }
    if(in == 1){
        break;
    }
  }
  if(x == 0){
    cout << in;
  }
}
    