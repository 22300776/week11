#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double x1,y1;
  double x2,y2;
  double dis;
  cin >> x1;
  cin >> y1;
  cin >> x2;
  cin >> y2;

  dis = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    cout << dis;
  return 0;
}