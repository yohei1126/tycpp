#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class strtype{
  char *p;
  int len;
public:
  strtype(char *ptr);
  ~strtype();
  void show();
};

strtype::strtype(char *ptr) {
  len = strlen(ptr);
  p = (char *)malloc(len+1);
  if (!p){
    cout << "memory allocation error!" << endl;
    exit(1);
  }
  strcpy(p,ptr);
}

strtype::~strtype(){
  cout << "free p" << endl;
  free(p);
}

void strtype::show(){
  cout << p << " - length:" << len << endl;
}

int main(){
  strtype s1("This is a test.");
  strtype s2("I like C++.");

  s1.show();
  s2.show();

  //p of s2 points the same address as p of s1.
  //p of s1 are freed twice but p of s2 aren't freed.   
  s2 = s1;

  s1.show();
  s2.show();

  return 0;
}
