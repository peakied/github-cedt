#include <iostream>
using namespace std;

int main(){
    string line; cin >> line;
    char a, b;
    int lid[line.length()];
    int all = 0, in; cin >> in;
    all += (line[0]-'0')*26*26*1000;
    all += (line[1]-'A')*26*1000;
    all += (line[2]-'A')*1000;
    all += (line[4]-'0')*100;
    all += (line[5]-'0')*10;
    all += line[6]-'0';
    all += in;
    lid[0] = all/(26*26*1000);
    all = all%(26*26*1000);
    lid[1] = all/(26*1000);
    a = lid[1]+65;
    all = all%(26*1000);
    lid[2] = all/(1000);
    b = lid[2]+65;
    all = all%(1000);
    lid[3] = all/(100);
    all = all%(100);
    lid[4] = all/(10);
    all = all%(10);
    lid[5] = all;
    cout << lid[0] << a << b << '-' << lid[3] << lid[4] << lid[5] << endl;
}