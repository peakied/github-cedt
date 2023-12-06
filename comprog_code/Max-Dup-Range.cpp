#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<string> count, out;
    string in1, in2;
    int check = 0, max = 0, locate = 0;
    while(cin >> in1){
        count.push_back(in1);
        if(in1 == in2){
            check++;
        }else check = 0;
        if(check > max) max = check;
        in2 = in1;
    }
    check = 0;
    in2 = "";
    for(string c : count){
        if(c == in2){
            check++;
        }else{
            locate += check+1;
            check = 0;
        }
        if(check == max) out.push_back(c + " --> x[ " + to_string(locate-1) + " : " + to_string(locate+check) + " ]");
        in2 = c;
    }
    sort(out.begin(), out.end());
    for(string c : out) cout << c << endl;
}