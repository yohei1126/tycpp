#include <string>
#include <iostream>
using namespace std;

class strtype{
  char *p_;
  int len_;
public:
  strtype();
  strtype(char* p, int len);
  char* getstring(){return p_;}
  int   getlength(){return len_;}
};

strtype::strtype(){
  p_ = new char[255];
  if (!p_) {
    cout << "memory allocation error." << endl;
    exit(1);
  }
  *p_ = '\0';
  len_ = 255;
}

strtype::strtype(char* p, int len){
  if (strlen(p) >= len) {
    cout << "too small memory allocation." << endl;
    exit(1);
  }
  p_ = new char[len];
  if (!p_){
    cout << "memory allocation error." << endl;
    exit(1);
  }
  len_ = len;
  strncpy(p_, p, len);
}

int main(){
  strtype s1;
  strtype s2("this is a test.", 30);

  cout << s1.getstring() << " " << s1.getlength() << endl;
  cout << s2.getstring() << " " << s2.getlength() << endl;

  strtype s3("this is a test.", 5);

  return 0;
}
