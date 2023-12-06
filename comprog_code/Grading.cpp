#include <iostream>
using namespace std;

int main() 
{
    int num;
    cin >> num;
    if(num >= 80){
      cout << "A";
    } 
    else if(num >= 70){
      cout << "B";
    }
    else if(num >= 60){
      cout << "C";
    }
    else if(num >= 50){
      cout << "D";
    }
    else{
      cout << "F";
    }
    return 0;
}