#include <iostream>
#include <cmath>
using namespace std;

void code(string line, string in, int len, int lenline){
    int lon = 0, lenin = in.length();
    for(int i = 2; i < lenin; i++){
        if(in[i] >= '0' && in[i] <= '9'){
            for(int u = 3; -1 < u; u--){
                while(!((line[lon] >= 'a' && line[lon] <= 'z') || (line[lon] >= 'A' && line[lon] <= 'Z'))){
                    cout << line[lon];
                    lon++;
                    if(lon >= lenline){
                        lon = 0;
                    }
                }
                if(pow(2,u) <= in[i]-'0'){
                    cout << char(tolower(line[lon]));
                    in[i] = in[i]-pow(2,u);
                    lon++;
                    if(lon >= lenline){
                        lon = 0;
                    }
                }else{
                    cout << char(toupper(line[lon]));
                    lon++;
                    if(lon >= lenline){
                        lon = 0;
                    }
                }
            }
        }else if(in[i] == '-'){
            for(int u = 3; -1 < u; u--){
                while(!((line[lon] >= 'a' && line[lon] <= 'z') || (line[lon] >= 'A' && line[lon] <= 'Z'))){
                    cout << line[lon];
                    lon++;
                    if(lon >= lenline){
                        lon = 0;
                    }
                }
                if(u%2 == 1){
                    cout << char(tolower(line[lon]));
                    lon++;
                    if(lon >= lenline){
                        lon = 0;
                    }
                }else{
                    cout << char(toupper(line[lon]));
                    lon++;
                    if(lon >= lenline){
                        lon = 0;
                    }
                }
            }
        }else if(in[i] == ','){
            for(int u = 3; -1 < u; u--){
                while(!((line[lon] >= 'a' && line[lon] <= 'z') || (line[lon] >= 'A' && line[lon] <= 'Z'))){
                    cout << line[lon];
                    lon++;
                    if(lon >= lenline){
                        lon = 0;
                    }
                }
                if(u != 2){
                    cout << char(tolower(line[lon]));
                    lon++;
                    if(lon >= lenline){
                        lon = 0;
                    }
                }else{
                    cout << char(toupper(line[lon]));
                    lon++;
                    if(lon >= lenline){
                        lon = 0;
                    }
                }
            }
        }
    }
}

void decode(string in){
    int lon = 3, out =  0, lenin = in.length();
    for(int i = 2; i < lenin; i++){
        if((in[i] >= 'a' && in[i] <= 'z') || (in[i] >= 'A' && in[i] <= 'Z')){
            if(in[i] >= 'a' && in[i] <= 'z'){
                out += pow(2,lon);
            }
            lon--;
        }
        if(lon == -1){
            if(out < 10){
                cout << out;
            }else if(out == 10){
                cout << '-';
            }else cout << ',';
            out = 0;
            lon = 3;
        }
    }
}

int main(){
    string line, in, eng;
    getline(cin, line);
    int len = 0, lenline = line.length();
    for(int i = 0; i < lenline; i++){
        if(tolower(line[i]) >= 'a' && tolower(line[i]) <= 'z'){
            len++;
        }
    }
    while(getline(cin >> ws, in)){
        if(in[0] == 'E'){
            code(line, in, len, lenline);
            cout << endl;
        }else if(in[0] == 'D'){
            decode(in);
            cout << endl;
        }
    }
}