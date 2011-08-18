#include <iostream>
#include <list>
#include <cstring>
using namespace std;

class Project {
public:
  char name[40];
  int days_to_completion;
  Project(){
    strcpy(name, "");
    days_to_completion = 0;
  }
  Project(char *n, int d) {
    strcpy(name, n);
    days_to_completion = d;
  }
  void add_days(int i) {
    days_to_completion += i;
  }
  void sub_days(int i) {
    days_to_completion -= i;
  }
  bool completed() {return !days_to_completion;}
  void report() {
    cout << name << ": ";
    cout << days_to_completion <<"日（残り）" << endl;
  }
};
bool operator<(const Project &a, const Project &b) {
  return a.days_to_completion < b.days_to_completion;
}
bool operator>(const Project &a, const Project &b) {
  return a.days_to_completion > b.days_to_completion;
}
bool operator==(const Project &a, const Project &b) {
  return a.days_to_completion == b.days_to_completion;
}
bool operator!=(const Project &a, const Project &b) {
  return a.days_to_completion != b.days_to_completion;
}

int main() {
  list<Project> proj;

  proj.push_back(Project("コンパイラ", 35));
  proj.push_back(Project("表計算", 190));
  proj.push_back(Project("STL実装", 1000));

  list<Project>::iterator p = proj.begin();
  while(p != proj.end()){
    p->report();
    p++;
  }

  p = proj.begin();
  p->add_days(10);

  do {
    p->sub_days(5);
    p->report();
  }while(!p->completed());

  return 0;
}

