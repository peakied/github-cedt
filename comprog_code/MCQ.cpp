#include <iostream>
using namespace std;
int main(){
    int i = 0, score = 0;
    string ta, sa;
    getline(cin,ta);
    getline(cin,sa);
    if(ta.length() == sa.length()){
        while(i < ta.length()){
            if(ta[i] == sa[i]){
                score++;
            }
            i++;
        }
        cout << score;
    }else cout << "Incomplete answer";

}