#include <iostream>
using namespace std;

int main() 
{
    int year;
    cin >> year;
    year = (year-543) % 100;
    cout << (year+abs(year/4)+11)%7;
    return 0;
}