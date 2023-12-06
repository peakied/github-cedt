#include <iostream>
#include <string>
using namespace std;
int main(){
  int i = 0;
  string lo;
  cin >> lo;
  while(i < lo.length()){
    if(lo[i] == '('){
      lo[i] = '[';
    }else if(lo[i] == '['){
      lo[i] = '(';
    }
    if(lo[i] == ']'){
      lo[i] = ')';
    }else if(lo[i] == ')'){
      lo[i] = ']';
    }
    i++;
  }
  cout << lo;
  
}
    