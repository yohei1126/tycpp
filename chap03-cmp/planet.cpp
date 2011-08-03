#include <iostream>
using namespace std;

class planet {
  int moons_;
  double dist_from_sun_; // unit: mile
  double diameter_;
  double mass_;
public:
  planet(int moons, double dist_from_sun, double diameter, double mass)
    :moons_(moons), dist_from_sun_(dist_from_sun), diameter_(diameter), mass_(mass){}
  double get_miles(){ return dist_from_sun_; }
};

double light (planet p){
  return p.get_miles()/186000;
} 

int main(){
  planet p(10000,186000,10000,100);
  cout << light(p) << endl; 
  return 0;
}
