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
  friend char* get_string(strtype *s);
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

char* get_string(strtype *s){
  return s->p;
}

int main(){
  strtype s1("I like C++.");

  s1.show();
  
  cout << get_string(&s1) << endl;

  return 0;
}
