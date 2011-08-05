#include <iostream>
using namespace std;

class building {
int num_floor_;
int num_room_;
int area_floor_;
public:
  building(int num_floor, int num_room, int area_floor)
    :num_floor_(num_floor), num_room_(num_room), area_floor_(area_floor){}
  void show(){
    cout << "number of floors: " << num_floor_ << endl; 
    cout << "number of rooms: " << num_room_ << endl;
    cout << "area of floor:" << area_floor_ << endl;
  }
};

class house : public building{
  int num_bedroom_;
  int num_bathroom_;
public:
  house(int num_floor, int num_room, int area_floor, int num_bedroom, int num_bathroom)
    :building(num_floor, num_room, area_floor), num_bedroom_(num_bedroom), num_bathroom_(num_bathroom){}
  void showh(){
    show();
    cout << "number of bedroom: " << num_bedroom_ << endl;
    cout << "number of bathroom: " << num_bathroom_ << endl;
  }
};

int main(){
  house h(10,11,22,3,44);
  h.showh();
  return 0;
}
