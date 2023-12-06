#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double a, b, c;
  cin >> a;
  cin >> b;
  cin >> c;
  cout << round(((-b-sqrt(pow(b,2)-4*a*c))/(2*a))*1e3)/1e3<<" "<<  round(((-b+sqrt(pow(b,2)-4*a*c))/(2*a))*1e3)/1e3 << endl;
}