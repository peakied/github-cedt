#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
  double W, H;
  cin >> W;
  cin >> H;
  cout << setprecision(15) << (sqrt(W*H))/60 << endl;
  cout << setprecision(15) << 0.024265*pow(W,0.5378)*pow(H,0.3964) << endl;
  cout << setprecision(15) << 0.0333*pow(W,(0.6157-0.0188*log10(W)))*pow(H,0.3);
}