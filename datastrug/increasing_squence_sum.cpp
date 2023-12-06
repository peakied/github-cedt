#include <iostream>

using namespace std;

int sequence(int &in, int start, int sum){
    int count = 0;
    if(sum > in) return 0;
    for(int i = start; i <= in; i++){
        if(sum+i == in) return 1+count;
        count+=sequence(in, i, sum+i);
    }
    return count;
}


int main(){
    int i; cin >> i;
    cout << sequence(i, 1, 0);
}

