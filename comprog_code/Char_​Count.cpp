#include <iostream>
#include <string>
using namespace std;

int main(){
    string a;
    int i = 0, num[26];
    for(int u = 0; u < 26; u++){
        num[u] = 0;
    }
    getline(cin, a);
    while(i < a.length()){
        if(a[i]-0 >= 65 && a[i] <= 90){
            num[(a[i]-0)-65] += 1;
        }else num[(a[i]-0)-97] += 1;
        i++;
    }
    for(int u = 0; u < 26; u++){
        char s;
        s = u+97;
        if(num[u] != 0){
            cout << s << " -> " << num[u] << endl;
        }
    }
    
}