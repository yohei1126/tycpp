#include <iostream>
using namespace std;

class base{
  int a;
public:
  void load_a(int n){a = n;}
  int get_a(){return a;}
};

class derived : public base {
  int b;
public:
  void load_b(int n){b = n;}
  int get_b(){return b;}
};

int main(){
  derived a, b;
  b.load_a(10);
  b.load_b(20);
  cout << b.get_a() << endl;
  cout << b.get_b() << endl;
  a = b;
  cout << a.get_a() << endl;
  cout << a.get_b() << endl;

  return 0;
}
