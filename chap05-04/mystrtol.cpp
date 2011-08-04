#include <iostream>
#include <cstdlib>
using namespace std;

long mystrtol(const char *start, char**end, int base = 10){
  return strtol(start,end,base);
}

int main() {
  char s[] = "1112AABB211";
  char* e;

  cout << mystrtol(s,&e) << endl;
  cout << e << endl;

  return 0;
}
