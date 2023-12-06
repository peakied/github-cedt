#include <iostream>
using namespace std;
int main(){
    int h, a = 0; cin >> h;
    while(a < h-1){
      a++;
      int i = 0;
      while(i < h-a){
        cout << ".";
        i++;
      }
      i = 2;
      if(i < a+1){
        cout << "*";
        if(a > 1){
          cout << ".";
        }
      }
      while(i < a){
        cout << "..";
        i++;
      }
      cout << "*\n";
      
    }
    int i = 0;
    while(i < h*2-1){
      cout << "*";
      i++;
    }
}