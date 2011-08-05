#include <iostream>
#include <cmath>
using namespace std;
#define _USE_MATH_DEFINES

class planet{
protected:
  double distance; // distance from the sun(unit: mile)
  int revolve;
public:
  planet(double d, int r):distance(d), revolve(r){}
};

class earth: public planet {
  double circumference;
public:
  earth(double d, int r):planet(d,r), circumference(2*d*M_PI) {}
  void show(){
    cout << "distance: " << distance << endl;
    cout << "revolve: " << revolve << endl;
    cout << "circumference: " << circumference << endl;  
  }
};

int main() {
  earth e(10.0,20);
  e.show();
  return 0;
}
