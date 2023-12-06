#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int num;
    cin >> num;
    if(num < 0){
      cout << "negative" << endl;
    }
    else if(num == 0){
      cout << "zero" << endl;
    }
    else cout << "positive" << endl;
    if(abs(num)%2 == 1){
      cout << "odd" << endl;
    }
    else cout << "even" << endl;
    return 0;
}