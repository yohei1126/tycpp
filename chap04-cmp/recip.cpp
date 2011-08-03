#include <iostream>
using namespace std;

void recip(double &num){
  num = 1/num;
}

int main(void) {
  double a = 5;
  recip(a);
  cout << a << endl;
  return 0;
}
