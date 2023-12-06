#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int day1, m1, year1, month1, day2, year2, month2, m2;
    cin >> day1 >> month1 >> year1 >> day2 >> month2 >> year2;
    year1 -= 543;
    year2 -= 543;
    if(year1%4 == 0){
      if(year1%100 == 0){
        if(year1%400 == 0){
        m2 = 29;
        }else m2 = 28;
      }else m2 = 29;
    }else m2 = 28;
    m1 = m2;
    if(month1 == 1){
      day1 == day1;
    }else if(month1 == 2){
      day1 += 31;
    }else if(month1 == 3){
      day1 += 31+m2;
    }else if(month1 == 4){
      day1 += 62+m2;
    }else if(month1 == 5){
      day1 += 92+m2;
    }else if(month1 == 6){
      day1 += 123+m2;
    }else if(month1 == 7){
      day1 += 153+m2;
    }else if(month1 == 8){
      day1 += 184+m2;
    }else if(month1 == 9){
      day1 += 215+m2;
    }else if(month1 == 10){
      day1 += 245+m2;
    }else if(month1 == 11){
      day1 += 276+m2;
    }else if(month1 == 12){
      day1 += 306+m2;
    }
//////////////////////////////////////////////
    if(year2%4 == 0){
      if(year2%100 == 0){
        if(year2%400 == 0){
        m2 = 29;
        }else m2 = 28;
      }else m2 = 29;
    }else m2 = 28;
    
    if(month2 == 1){
      day2 == day2;
    }else if(month2 == 2){
      day2 += 31;
    }else if(month2 == 3){
      day2 += 31+m2;
    }else if(month2 == 4){
      day2 += 62+m2;
    }else if(month2 == 5){
      day2 += 92+m2;
    }else if(month2 == 6){
      day2 += 123+m2;
    }else if(month2 == 7){
      day2 += 153+m2;
    }else if(month2 == 8){
      day2 += 184+m2;
    }else if(month2 == 9){
      day2 += 215+m2;
    }else if(month2 == 10){
      day2 += 245+m2;
    }else if(month2 == 11){
      day2 += 276+m2;
    }else if(month2 == 12){
      day2 += 306+m2;
    }
//////////////////////////////////////////////////////////////////
    if(year1 - year2 < 0){
      if(m1 == 29){
        day1 -= 366;
      }else day1 -= 365;
      day1 = abs(day1);
    }
    if(year2 - year1 > 1){
      day1 += ((year2-year1)-1)*365;
    }
    day1 += day2;
    cout << day1 << endl;
    cout << round(sin((2*M_PI*day1)/23)*100.0)/100.0 << " ";
    cout << round(sin((2*M_PI*day1)/28)*100.0)/100.0 << " ";
    cout << round(sin((2*M_PI*day1)/33)*100.0)/100.0 << endl;
    

    return 0;
}