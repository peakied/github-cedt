#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    string ph;
    cin >> ph;
    if(ph[0] == '0' && ph.length() == 10 && (ph[1] == '6' || ph[1] == '9' || ph[1] == '8')){
      cout << "Mobile number" << endl;
    }
    else cout << "Not a mobile number" << endl;
    return 0;
}