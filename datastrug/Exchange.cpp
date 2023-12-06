#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N; cin >> N;
    while(N--){
        int n; cin >> n;
        double arr[n][n];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> arr[i][j];
            }
        }
        for(int k = 0; k < n; k++){
            for(int i = 0; i < n; i++){
                for(int j = 0; j < n; j++){
                    arr[i][j] = max(arr[i][j], arr[i][k]*arr[k][j]);
                }
            }
        }
        bool check = false;
        for(int i = 0; i < n; i++){
            if(arr[i][i] > 1){
                check = true;
            }
        }
        if(check) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
}