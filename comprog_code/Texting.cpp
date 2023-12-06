#include <iostream>
#include <map>
#include <utility>
#include <set>

using namespace std;

int main(){
    map<string, string> text;
    map<char, string> text2;
    string type;
    char mintext = '2', truetext = 'a';
    int check = 1;
    for(int i = 0; i < 26; i++){
        string s(check, mintext);
        text[s] = truetext;
        text2[truetext] = s;
        truetext++;
        check++;
        if((check == 4 && (mintext != '9' && mintext != '7')) || check == 5){
            mintext++;
            check = 1;
        }
    }
    text["0"] = ' ';
    text2[' '] = '0';
    while(cin >> type){
        cout << ">> ";
        string out = "";
        if(type == "K2T"){
            getline(cin, type);
            for(int i = 1; i < type.length(); i++){
                if(type[i] == ' '){
                    cout << text[out];
                    out = "";
                }
                else out += type[i];
            }
            cout << text[out];
        }else{
            getline(cin, type);
            for(int i = 1; i < type.length(); i++) cout << text2[tolower(type[i])] << ' ';
        }
        cout << endl;
    }
}