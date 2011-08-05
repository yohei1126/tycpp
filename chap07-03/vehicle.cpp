#include <iostream>
using namespace std;

class vehicle{
  int num_wheels;
  int range;
public:
  vehicle(int w, int r):num_wheels(w), range(r){}
  void showv(){
    cout << "number of wheels: " << num_wheels << endl;
    cout << "range: " << range << endl;
  }
};

class car: public vehicle {
  int passengers;
public:
  car(int w, int r, int p):vehicle(w,r), passengers(p){}
  void show(){
    showv();
    cout << "passengers: " << passengers << endl;
  }
};

class truck: public vehicle {
  int loadlimit;
public:
  truck(int w, int r, int l):vehicle(w,r), loadlimit(l){}
  void show(){
    showv();
    cout << "load limit: " << loadlimit << endl;
  }
};

int main(){
  car c(10,2,6);
  truck t(20,30,66);

  c.show();
  t.show();

  return 0;
}
