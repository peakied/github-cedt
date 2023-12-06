#include <iostream>
using namespace std;

int main(){
    int i; cin >> i;
    int cell[i][3], out;
    for(int u = 0; u < i; u++){
        for(int c = 0; c < 3; c++){
            cin >> cell[u][c];
        }
    }
    cin >> out;
    int dif[out];
    for(int u = 0; u < out; u++){
        int start, end; cin >> start >> end;
        for(int c = 0; c < i; c++){
            if((start-end <= 0) && (cell[c][1]-cell[c][2] <= 0)){
                if(start >= cell[c][1] && end >= cell[c][2]){
                    dif[c] = end-cell[c][2];
                }else if(start < cell[c][1]){
                    dif[c] = (cell[c][2]-start)+(end-start);
                }else dif[c] = 0;
            }else if((start-end > 0) && (cell[c][1]-cell[c][2] > 0)){
                if(start <= cell[c][1] && end <= cell[c][2]){
                    dif[c] = cell[c][2]-end;
                }else if(start > cell[c][1]){
                    dif[c] = (start-cell[c][2])+(start-end);
                }else dif[c] = 0;
            }else if(((start-end) > 0) != ((cell[c][1]-cell[c][2])>0)){
                dif[c] = abs(start-cell[c][2]) + abs(start-end);
            }
        }
        int min = dif[0], place = cell[0][0];
        for(int c = 0; c < i; c++){
            if(min > dif[c]){
                place = cell[c][0];
                min = dif[c];
            }else if(min >= dif[c] && cell[c][0] < place){
                place = cell[c][0];
                min = dif[c];
            }
        }
        cout << ">> " << place << endl;
    }
}