#include <iostream>
using namespace std;

struct st_score{
    int kor,eng,math;
    int total;
    double average;
};

int main() {
    st_score st_score1;
    cin >> st_score1.kor;
    cin >> st_score1.eng;
    cin >> st_score1.math;

    st_score1.total = st_score1.kor + st_score1.eng + st_score1.math;
    st_score1.average = st_score1.total / 3.0;

    cout << st_score1.total << endl;
    cout << st_score1.average << endl;

    if(st_score1.kor>=70){
        cout << "Korean - Pass\n";
    }
    else cout << "Korean - Fail\n";

    if(st_score1.eng>=70){
        cout << "English - Pass\n";
    }
    else cout << "English - Fail\n";

    if(st_score1.math>=70){
        cout << "Math - Pass\n";
    }
    else cout << "Math - Fail\n";

  return 0;
}