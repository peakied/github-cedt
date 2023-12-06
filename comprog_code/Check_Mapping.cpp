#include <iostream>
#include <set>
using namespace std;

int main() {
  set<int> in, all;
  int i, q;
  cin >> i;
  while(i--){
    in.insert(i+1);
    cin >> q;
    all.insert(q);
  }
  if(in == all) cout << "YES";
  else cout << "NO";
}
