#include <iostream>
using namespace std;

class vehicle{
  int num_wheels;
  int range;
public:
  vehicle():num_wheels(0), range(0){}
  vehicle(int w, int r):num_wheels(w), range(r){}
  void showv(){
    cout << "number of wheels: " << num_wheels << endl;
    cout << "range: " << range << endl;
  }
};

enum motor {gas, electric, diesel};

class mortorized: virtual public vehicle {
  enum motor mtr;
public:
  mortorized(enum motor m, int w, int r):vehicle(w,r),mtr(m){}
  void showm(){
    cout << "engin: ";
    switch(mtr) {
    case gas:
      cout << "gas" << endl;
      break;
    case electric:
      cout << "electric" << endl;
      break;
    case diesel:
      cout << "diesel" << endl;
      break;
    }
  }
};

class road_use : virtual public vehicle {
  int passengers;
public:
  road_use(int p, int w, int r):vehicle(w,r),passengers(p){}
  void showr() {
    cout << "passerngers: " << passengers << endl;
  }
};

enum steering {power, rack_pinion, manual};

class car: public mortorized, public road_use {
  enum steering strng;
public:
  car(enum steering s, enum motor m, int w, int r, int p):
    vehicle(w,r), mortorized(m,w,r), road_use(p,w,r), strng(s){}
  void show(){
    vehicle::showv(); showr(); showm();
    cout << "steering: ";
    switch(strng){
    case power:
      cout << "power" << endl;
      break;
    case rack_pinion:
      cout << "rack and pinion" << endl;
      break;
    case manual:
      cout << "manual" << endl;
      break;
    }
  }
};

int main(){
  car c(power, gas, 10, 2, 6);

  c.show();

  return 0;
}
