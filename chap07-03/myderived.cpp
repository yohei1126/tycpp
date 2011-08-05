#include <iostream>
#include <cstring>
using namespace std;

class mybase{
  char str[10];
public:
  mybase(){str[0] = '\0';}
  mybase (char *s);
  char *get(){return str;}
};

mybase::mybase(char *s){
  int len = strlen(s)+1;
  if (len > 10) len = 10;
  strncpy(str,s,len);
}

class myderived: public mybase {
  int len;
public:
  myderived(char* s);
  int getlen(){return len;}
  void show(){cout << get() << endl;}
};

myderived::myderived(char* s):mybase(s) {
  len = strlen(s)+1;  
  if(len > 10) len = 10;
}

int main(){
  char str[] = "hello, world. hello, sunshine.";
  myderived ob(str);
  ob.show();
  cout << ob.getlen() << endl;

  return 0;
}
