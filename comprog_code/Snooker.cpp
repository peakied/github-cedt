#include <iostream>
#include <string>
using namespace std;

int main(){
    int i, round, a = 0; cin >> round;
    string ball, out = "Y G N B P K";
    getline(cin, ball);
    for(i = 0; i < round; i++){
        getline(cin, ball);
        int rball = 0, point = 0, check = 0;
        if(ball[0] == 'R'){
            while(rball < ball.length()){
                if(rball%4 == 0 && ball[rball] != 'R'){
                    if(ball[rball] == 'Y'){
                        if(ball.length() - rball <= out.length()){
                            for(int u = 0; u < ball.length() - rball; u+=2){
                                point += (u/2+2);
                            }
                            break;
                        }
                    }else{
                        check = 1;
                        break;
                    }
                }
                if(ball[rball] == 'R' && rball%2 == 0){
                    point += 1;
                }else if(ball[rball] == 'Y'){
                    point += 2;
                }else if(ball[rball] == 'G'){
                    point += 3;
                }else if(ball[rball] == 'N'){
                    point += 4;
                }else if(ball[rball] == 'B'){
                    point += 5;
                }else if(ball[rball] == 'P'){
                    point += 6;
                }else if(ball[rball] == 'K'){
                    point += 7;
                }
                if(ball[rball] == ball[rball-2] && ball[rball] != ' '){
                    check = 1;
                    break;
                }
                rball++;
            }
            if(check == 0){
                cout << point << '\n';
            }else{
                cout << "WRONG_INPUT\n";
            }
        }else cout << "WRONG_INPUT\n";
    }

}