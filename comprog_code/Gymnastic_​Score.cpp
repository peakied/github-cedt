#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    double q, w, e, r, min, max;
    cin >> q >> w >> e >> r;
    min = w;
    max = w;
    if(q >= max){
      max = q;
    }
    if(q < min){
      min = q;
    }
    if(e >= max){
      max = e;
    }
    if(e < min){
      min = e;
    }
    if(r >= max){
      max = r;
    }
    if(r < min){
      min = r;
    }
    cout << round(((q+w+e+r-max-min)/2)*100.0)/100.0;

    return 0;
}