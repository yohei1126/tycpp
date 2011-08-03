#include <iostream>
using namespace std;

class a_type{
  double a, b;
 public:
  a_type (double x, double y) {a=x; b=y;}
  void show(){cout << a << ' ' << b << endl;}
};
