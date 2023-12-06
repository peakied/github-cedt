#include <iostream>
using namespace std;
int main() {
   int i; cin >> i;
   int cell[i], max, check = 0, air = 0, block = 0;
   for(int u = 0; u < i; u++){
      cin >> cell[u];
      block += cell[u];
   }
   max = cell[0];
   for(int u = 0; u < i; u++){
        if(max < cell[u]){
            max = cell[u];
        }
   }
   int tall = cell[0], back = 0;
   for(int u = 0; u < i; u++){
      if(check == 0){
          if(cell[u] <= tall && cell[u] != max){
              air += max-tall;
          }else if(cell[u] >= tall && cell[u] != max){
              tall = cell[u];
              air += max-tall;
          }else{
              check = 1;
              tall = cell[i-1];
          }
      }else if(check == 1){
          back++;
          if(cell[i-back] <= tall){
              air += max-tall;
          }else if(cell[i-back] >= tall && cell[i-back] != max){
              tall = cell[i-back];
              air += max-tall;
          }
      }
   }
   cout << i*max-air-block;
}
