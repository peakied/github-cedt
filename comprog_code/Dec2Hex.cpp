#include <iostream> 
#include <string>
using namespace std; 

string dec2bin(int d) {
    string charlec[16] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "A", "B", "C", "D", "E", "F"};
    if (d <= 15) return charlec[d];
    return dec2bin(d/16) + dec2bin(d%16); 
} 
int main() { 
    int d; 
    while (cin >> d) { 
        cout << d << " -> " << dec2bin(d) << endl; 
    } 
    return 0; 
} 