#include <bits/stdc++.h>

using namespace std;


int main(){
    int in, n, valuein, value;
    cin >> n >> in >> valuein;
    list<int> arr1;
    for(int i = 0; i < n; i++){
        cin >> value;
        arr1.push_back(value);
    }
    auto itr = arr1.insert(next(arr1.begin(), in), valuein);
    auto itr2 = itr;
    bool first = true;
    while (!arr1.empty()) {
        int left = 0, right = 0;
        while ((*itr) == (*++itr)) ++right;
        while ((*itr2) == (*--itr2)) ++left;
        ++itr2;
        int count = left + right + 1;
        if (count >= 3 && (left >= 1 || first)) {
            while (count--) itr2 = arr1.erase(itr2);
        } else break;
        first = false;
    }
    for (auto &x : arr1) cout << x << ' ';
}

