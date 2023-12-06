#include <iostream>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    map<long long int, long long int> son;
    long long int N, M;
    long long int in1, in2;     
    cin >> N >> M;
    while(N--){
        cin >> in1 >> in2;
        son[in2] = in1;
    }
    while(M--){
        cin >> in1 >> in2;
        if(son[son[in1]] == son[son[in2]]){
            if(son[son[in1]] != 0){
                if(in1 != in2){
                    cout << "YES" << endl;
                    continue;
                }
            }
        }
        
        cout << "NO" << endl;
    }
}
