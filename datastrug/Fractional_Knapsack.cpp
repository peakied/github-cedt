#include <iostream>
#include <set>
#include <vector>
#include <iomanip>

using namespace std;

int main(){
    int n;
    double weigth, in1; cin >> weigth >> n;
    double bag = 0, price = 0;
    vector<double> v;
    set<pair<double, double>> cost;
    while(n--){
        cin >> in1;
        v.push_back(in1);
    }
    for(double c : v){
        cin >> in1;
        double a = c/in1;
        if(in1 == 0){
          price += c;
          continue;
        }
        cost.insert(make_pair(a, in1));
    }
    auto it = cost.end();
    it--;
    while(weigth >= bag){
        if((*it).second+bag <= weigth){
            bag += (*it).second;
            price += (*it).second*(*it).first;
            if(it == cost.begin()) break;
        }else{
            price += ((*it).first*(*it).second)*((weigth-bag)/(*it).second);
            break;
        }
        it--;
    }
    cout << fixed << setprecision( 4 ) << price;
}