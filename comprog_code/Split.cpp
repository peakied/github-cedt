#include <iostream>
#include <vector>
using namespace std;
vector<string> split(string line, char delimiter) {
    vector<string> in;
    string let;
    int len = 0;
    for(int i = 0; i < line.length(); i++){
        if(line[i] != delimiter){
            let = line[i];
            in.push_back(let);
            i++;
            while(line[i] != delimiter && i != line.length()){
                in[len] += line[i];
                i++;
            }
            len++;
        }
    }
    return in;
}
int main() {
    string line;
    getline(cin, line);
    string delim;
    getline(cin, delim);
    for (string e : split(line, delim[0])) cout << '(' << e << ')';
}
