#include <iostream>
#include <cstdlib>
using namespace std;

class myclass{
  int *p;
public:
  myclass(int i);
  myclass(myclass &a);
  ~myclass(){ cout << "destruct " << *p << endl; delete p;}
  friend int getval(myclass o);
};

myclass::myclass(int i){
  p = new int;
  if (!p){
    cout << "memory allocation error." << endl;
    exit(1);
  }
  *p = i;
  cout << "construct " << i << endl;
}

myclass::myclass(myclass &m){
  p = new int;
  if (!p) {
    cout << "memory allocation error." << endl;
    exit(1);
  }
  *p = *(m.p);
  cout << "copy construct " << *p << endl;
}

int getval(myclass o){
  cout << "call getval " << *o.p << endl;
  return *o.p;
}

int main(){
  myclass a(1), b(2);
  //if myclass doesn't have copy constructor,
  //pointer p will be free after calling geteval.
  cout << getval(a) << " " << getval(b) << endl;
  cout << getval(a) << " " << getval(b) << endl;

  return 0;
}
