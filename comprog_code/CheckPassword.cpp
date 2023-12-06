#include <iostream>
using namespace std;
int main(){
    string sen1 = "1", sen2 = "0";
    while(sen1 != ""){
        int a = 0, A = 0, num = 0, sig = 0;
        sen2 = sen1;
        cin >> sen1;
        if(sen1 == sen2){
          break;
        }
        for(int i = 0; i < sen1.length(); i++){
            if(sen1[i] >= '0' && sen1[i] <= '9'){
                num++;
            }else if(sen1[i] >= 'A' && sen1[i] <= 'Z'){
                A++;
            }else if(sen1[i] >= 'a' && sen1[i] <= 'z'){
                a++;
            }else sig++;
        }
        if(num != 0 && a != 0 && A != 0 && sig != 0 && sen1.length() >= 12){
            cout << ">> strong\n";
        }else if(num != 0 && a != 0 && A != 0 && sen1.length() >= 8){
          cout << ">> weak\n";
        }else cout << ">> invalid\n";
    }
}