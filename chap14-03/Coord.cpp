#include <iostream>
#include <vector>
using namespace std;

class Coord {
public:
  int x, y;
  Coord():x(0),y(0) {}
  Coord(int a, int b):x(a), y(b){}
  bool operator<(const Coord & c);
  bool operator==(const Coord &c);
};

bool Coord::operator<(const Coord &c) {
  if((x < c.x) && (y < c.y)) {
    return true;
  } else {
    return false;
  }
}

bool Coord::operator==(const Coord &c){
  if ((x == c.x) && (y == c.y)) {
    return true;
  } else {
    return false;
  }
}

int main(){
  vector <Coord> v;

  for (int i = 0; i < 10; i++) {
    v.push_back(Coord(i, 10-i));
  }
  for (int i = 0; i < v.size(); i++) {
    cout << v[i].x << " " << v[i].y << ", ";
  }
  cout << endl;

  return 0;
}
