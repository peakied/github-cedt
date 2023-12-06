#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    double num;
    cin >> num;
    cout << round(((pow(num,sqrt(log(pow(num+1,2)))))/(10-num))*1e6)/1e6;
    return 0;
}