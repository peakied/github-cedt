#include <iostream>
#include <string>
using namespace std;
int main(){
    int i = 0,c = 0;
    string lol, one;
    getline(cin, one);
    getline(cin, lol);
    while(i < lol.length()){
      int a = one.length(), b = lol.length();
      if(lol[i] == one[0]){
        if(lol[i-1] == ' '  || (lol[i-1] == '(') || lol[i-1] == '\"' || lol[i-1] == ',' || lol[i-1] == '.' || lol[i-1] == '\'' || i == 0){
          if(lol[i+a] == ' ' || lol[i+a] == ')' || lol[i+a] == '\"' || lol[i+a] == ',' || lol[i+a] == '.' || lol[i+a] == '\'' || i == lol.length()-one.length()){
            int num = 0, r = 0;
            while(r < one.length()){
              if(one[r] == lol[(r+i)]){
                num += 1;
              }
              r++;
              if(num == one.length()){
                c++;      
              }
            }
          }
        }
      }
      i++;
    }
    cout << c;
}