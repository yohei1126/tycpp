#include <iostream>
using namespace std;

class pr2;

class pr1{
  bool printing;
public:
  pr1 ():printing(false){};
  void set_print(bool status) { printing = status; } 
  friend bool inuse(pr1 p1, pr2 p2);
};

class pr2{
  bool printing;
public:
  pr2():printing(false){};
  void set_print(bool status){ printing = status; }
  friend bool inuse(pr1 p1, pr2 p2);
};

bool inuse(pr1 p1, pr2 p2) {
  if ((p1.printing == true) or (p2.printing == true)) return true;
  else return false;
}

int main(){
  pr1 p1;
  pr2 p2;
  cout << inuse (p1,p2) << endl;
  p1.set_print(true);
  cout << inuse(p1,p2) << endl;
  p1.set_print(false);
  p2.set_print(true);
  cout << inuse(p1, p2) << endl; 
  p2.set_print(false);
  cout << inuse(p1,p2) << endl; 
  return 0;
}
