#include <bits/stdc++.h>
using namespace std;

vector<int> v;
int M;
void child(int num){
  if(num>M) return;
  v.push_back(num-1);
  child(num*2);
  child(num*2+1);
}

int main(){
    int in, maxin;
    cin >> maxin >> in;
    M = maxin;
    child(in+1);
    cout << v.size() << endl;
    sort(v.begin(), v.end());
    for(int i : v){
        cout << i << ' ';
    }
    return 0;
}