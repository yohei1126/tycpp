#include <iostream>
using namespace std;

class num{
protected:
  int n;
public:
  num(int a):n(a){}
  virtual void shownum(){ } 
};

class outhex : public num {
public:
  outhex(int a):num(a){}
  void shownum(){
    cout << hex << n << endl; 
  }
};

class outoct : public num {
public:
  outoct(int a):num(a){}
  void shownum(){
    cout << oct << n << endl;
  }
};

int main(){
  outhex h(10);
  outoct o(10);

  h.shownum();
  o.shownum();
  return 0;
}
