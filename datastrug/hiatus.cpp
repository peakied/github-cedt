#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> cell(n);
    for (int i = 0; i < n; ++i) {
        cin >> cell[i].first >> cell[i].second;
    }
    sort(cell.begin(), cell.end());

    for (int i = 0; i < m; ++i) {
        int year, month;
        cin >> year >> month;
        if (binary_search(cell.begin(), cell.end(), make_pair(year, month))) {
            cout << "0 0 ";
        } else {
            auto it = lower_bound(cell.begin(), cell.end(), make_pair(year, month));
            if (it == cell.begin()) {
                cout << "-1 -1 ";
            } else {
                --it;
                cout << (*it).first << ' ' << (*it).second << ' ';
            }
        }
    }
}

