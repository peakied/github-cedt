#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
    int i, out = 0; cin >> i;
    int b[i];
    string a[i], line, linec;
    for(int u = 0; u < i; u++){
        cin >> a[u];
        cin >> b[u];
    }
    int c = 0;
    while(true){
      cin >> line;
      if(line == linec){
          break;
      }
      if(linec[4] != line[4]){
          for(int u = 0; u < i; u++){
              if(line[4] == a[u][0] &&line[5] == a[u][1]){
                  if(c != 0){
                      out += b[u];
                  }
             }
          }
      }
      linec = line;
      c++;
    }
    cout << out;
}