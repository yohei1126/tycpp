#include <iostream>
using namespace std;

class dist{
protected:
  double d_; // distination (unit: mile)
public:
  dist(double d):d_(d){}
  virtual double trav_time(){ return d_/60;}
};

class metric : public dist{
public:
  metric(double d):dist(d){}
  double trav_time(){
    return d_/100;
  }
};

int main(){
  dist *p;
  dist d(100.0);
  p = &d;
  cout << p->trav_time() << endl;
  metric m(100.0);
  p = &m;
  cout << p->trav_time() << endl;

  return 0;
}
