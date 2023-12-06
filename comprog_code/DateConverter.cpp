#include <iostream>
#include <string>
using namespace std;
int main(){
    string date, month[12] = {"JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};
    cin >> date;
    cout << month[stoi(date.substr(3,2))-1] << " " << stoi(date.substr(0,2)) << ", " << stoi(date.substr(6,4))-543;
    
}