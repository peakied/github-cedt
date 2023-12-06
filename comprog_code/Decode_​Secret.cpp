#include <iostream>
using namespace std;  
  
int main()  
{  
    string line;
    char mark = '0';
    while(getline(cin >> ws, line)){
        int check = 0;
        if(line.empty()){
            break;
        }
        int len = line.length();
        for(int u = 0; u < len-1; u++){
            if(!((line[u] >= 65 && line[u] <= 90) || (line[u] >= 97 && line[u] <= 122) || line[u] == ' ' || line[u] == '.')){
                if(mark == line[u]){
                    check++;
                    mark = '0';
                }else if(check == 0){
                    mark = line[u];
                    check++;
                }else if(check%2 == 1){
                    cout << line[u];
                }else{
                    mark = line[u];
                    check++;
                }
            }else if(check%2 == 1){
                cout << line[u];
            }
        }
        cout << endl;
    }
}