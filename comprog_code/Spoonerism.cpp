#include <iostream>
using namespace std;

int main(){
    string line; getline(cin, line);
    char aei[5] = {'a', 'e', 'i', 'o', 'u'};
    int wight, len1 = 0, len2 = 0, lenall = line.length(), check = 0;
    for(int i = 0; i < lenall; i++){
        for(int u = 0; u < 5; u++){
            if(line[i] == aei[u] && check == 0){
                len1 = i;
                check = 1;
            }
            if(line[i] == ' ' && len2 == 0){
                len2 = i;
                wight = len2-len1;
            }
            if(line[i] == ' '){
                len2 = i;
            }
        }
    }
    for(int i = len2; i < lenall; i++){
        for(int u = 0; u < 5; u++){
            if(line[i] == aei[u]){
                len2 = i;
                check = 0;
                break;
            }
        }
        if(check == 0){
            break;
        }
    }
    for(int i = 0; i < lenall; i++){
        int u = 0;
        if(i == len1){
            while(true){
                cout << line[len2+u];
                u++;
                if(len2+u == lenall){
                    break;
                }
            }
            i += wight;
        }else if(i == len2){
            while(true){
                cout << line[len1+u];
                u++;
                if(u == wight){
                    break;
                }
            }
            break;
        }
        cout << line[i];
    }
}