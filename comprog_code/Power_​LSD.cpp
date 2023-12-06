#include <iostream>
using namespace std;

int main(){
    while(true){
        string num1, num2; cin >> num1 >> num2;
        if(num1 == ""){
            break;
        }
        int i = 0;
        int time = (num1[num1.length()-1])-'0', bottom = (num1[num1.length()-1])-'0';
        while(time%10 != bottom || i == 0){
            time *= bottom;
            i++;
        }
        int count = ((num2[num2.length()-5]-'0')*10000+(num2[num2.length()-4]-'0')*1000+(num2[num2.length()-3]-'0')*100+(num2[num2.length()-2]-'0')*10+num2[num2.length()-1]-'0')%(i);
        time = (num1.back())-'0';
        if(count == 0){
            count = 4;
        }
        for(int u = 0; u < count-1; u++){
            time *= bottom;
        }
        if(num2 == "0"){
            time = 1;
        }
        cout << ">> " << time%10 << endl;
    }
}