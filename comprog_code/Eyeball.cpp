#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    double xe, ye, xm, ym, re, rm, mass;
    cin >> xe;
    cin >> ye;
    cin >> re;
    cin >> rm;
    cin >> xm;
    cin >> ym;
    mass = (re-rm)/(sqrt(pow(xm-xe,2)+pow((ym-ye),2)));
    cout << round(((xm-xe)*mass)+ye) << " " << round(((ym-ye)*mass)+ye);
    return 0;
}