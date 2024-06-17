#include <iostream>
using namespace std;

int main() {
    int month,day;
    int day_count;

    std::cin >> month;
    std::cin >> day;

    if(month==1){
        day_count = day;
    }
    else if(month==2){
        day_count = 31+day;
    }
    else if(month==3){
        day_count = 31+28+day;
    }
    else if(month==4){
        day_count = 31*2+28+day;
    }
    else if(month==5){
        day_count = 31*2+30+28+day;
    }
    else if(month==6){
        day_count = 31*3+30+28+day;
    }
     else if(month==7){
        day_count = 31*3+30*2+28+day;
    }
    else if(month==8){
        day_count = 31*4+30*2+28+day;
    }
    else if(month==9){
        day_count = 31*5+30*2+28+day;
    }
    else if(month==10){
        day_count = 31*5+30*3+28+day;
    }
    else if(month==11){
        day_count = 31*6+30*3+28+day;
    }
    else if(month==12){
        day_count = 31*6+30*4+28+day;
    }
    std::cout << day_count;
  return 0;
}