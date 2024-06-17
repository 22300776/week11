#include <iostream>
using namespace std;

int main() {
  int height, weight;
  double bmi;
  cin >> height;
  cin >> weight;
  bmi = weight / (height * 0.01 * height * 0.01);
  if(bmi>=25){
    std::cout << "Yes";
  }
  else cout << "No";
  return 0;
}