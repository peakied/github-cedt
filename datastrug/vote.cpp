#include <iostream>
#include <map>
#include <vector>
#include <queue>

int main(){
    int n, k; std::cin >> n >> k;
    std::string namein;
    std::map<std::string, int> name;
    std::priority_queue<int> vote;
    while(n--){
        std::cin >> namein;
        if(name.find(namein) == name.end()) name[namein] = 1;
        else name[namein]++;
    }
    for(auto a : name){
        vote.push(a.second);
    }
    k--;
    while(k--){
        if(sizeof(vote) == 1) break;
        vote.pop();
    }
    std::cout << vote.top();
}