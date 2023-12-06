#include <iostream>

using namespace std;

typedef unsigned long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll i, n, k, in1, in2; cin >> i >> n >> k;
    ll arr[i+1];
    arr[0] = 0;
    for(int q = 1; q < i+1; q++){
        cin >> in1;
        arr[q] = in1+arr[q-1]+k;
    }
    while(n--){
        cin >> in1 >> in2;
        in1++;
        if(in2 >= arr[i] - arr[in1-1]){
            cout << arr[i] - arr[in1-1]-(i-in1+1)*k;
            continue;
        }
        if(in2 < arr[in1]-arr[in1-1]){
            cout << "0\n";
            continue;
        }
        ll max = i, min = in1;
        while(max>min){
            ll mid=(max+min)/2;
            if(arr[mid]-arr[in1-1] <= in2 && arr[mid+1]-arr[in1-1]>in2){
                cout << arr[mid]-k*(mid-in1+1)-arr[in1-1]<<"\n";
                break;
            }
            else if(arr[mid]-arr[in1-1] < in2){
                min=mid;
            }
            else{
                max=mid;
            }
        }
    }
}