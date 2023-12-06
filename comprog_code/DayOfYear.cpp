#include <iostream>
using namespace std;

int main() 
{
    int day, m2, year, m;
    cin >> day >> m >> year;
    year -= 543;
    if(year%4 == 0){
      if(year%100 == 0){
        if(year%400 == 0){
        m2 = 29;
        }
        else m2 = 28;
      }
      else m2 = 29;
    }
    else m2 = 28;
    if(m == 1){
      cout << day;
    }
    else if(m == 2){
      cout << day+31;
    }
    else if(m == 3){
      cout << day+31+m2;
    }
    else if(m == 4){
      cout << day+62+m2;
    }
    else if(m == 5){
      cout << day+92+m2;
    }
    else if(m == 6){
      cout << day+123+m2;
    }
    else if(m == 7){
      cout << day+153+m2;
    }
    else if(m == 8){
      cout << day+184+m2;
    }
    else if(m == 9){
      cout << day+215+m2;
    }
    else if(m == 10){
      cout << day+245+m2;
    }
    else if(m == 11){
      cout << day+276+m2;
    }
    else if(m == 12){
      cout << day+306+m2;
    }
    
    return 0;
}