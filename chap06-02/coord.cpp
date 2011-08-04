#include <iostream>
using namespace std;

class coord{
  int x, y;
public:
  coord():x(0),y(0){}
  coord(int i, int j):x(i), y(j){}
  void get_xy(int &i, int &j){ i = x; j = y; }
  coord operator*(coord ob2);
  coord operator/(coord ob2);
};

coord coord::operator*(coord ob2){
  coord tmp;
  tmp.x = x * ob2.x;
  tmp.y = y * ob2.y;
  return tmp;
}

coord coord::operator/(coord ob2){
  coord tmp;
  tmp.x = x / ob2.x;
  tmp.y = y / ob2.y;
  return tmp; 
}

int main(){
  coord c1(30,40), c2(10,20),c3;
  int x, y;

  c3 = c1 * c2;
  c3.get_xy(x,y);
  cout << "c1*c2 = " << x << ", " << y << endl;
  c3 = c1 / c2;
  c3.get_xy(x,y);
  cout << "c1/c2 = " << x << ", " << y << endl;
  return 0;
}
