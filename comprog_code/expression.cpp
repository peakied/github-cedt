#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int fact = 1;
  for(int i = 1; i <= 10; ++i){
    fact *= i;
  }
  cout << (M_PI-(fact/pow(8, 8))+pow(log(9.7),7/sqrt(71)-sin(2*M_PI/9)))/pow(1.2,cbrt(2.3));
  return 0;
}