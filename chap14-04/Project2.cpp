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

  cout << "proj:" << endl;
  list<Project>::iterator p = proj.begin();
  while(p != proj.end()){
    p->report();
    p++;
  }
  cout << endl;

  list<Project> proj2;
  proj2.push_back(Project("データベース", 780));
  proj2.push_back(Project("メールマージ", 50));
  proj2.push_back(Project("COMオブジェクト", 300));

  cout << "proj2:" << endl;
  p = proj2.begin();
  while(p != proj2.end()){
    p->report();
    p++;
  }
  cout << endl;

  proj.merge(proj2);

  cout << "proj(merge)" << endl;
  p = proj.begin();
  while(p != proj.end()){
    p->report();
    p++;
  }
  proj.sort();

  return 0;
}

