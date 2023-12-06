#include <iostream>
using namespace std;

int main() 
{
    int num;
    cin >> num;
    if(num <= 100){
      cout << "18" << endl;
    }
    else if(num <= 250){
      cout << "22" << endl;
    }
    else if(num <= 500){
      cout << "28" << endl;
    }
    else if(num <= 1000){
      cout << "38" << endl;
    }
    else if(num <= 2000){
      cout << "58" << endl;
    }
    else cout << "Reject";
    return 0;
}