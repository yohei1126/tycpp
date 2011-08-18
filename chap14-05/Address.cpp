#include <iostream>
#include <map>
#include <cstring>
using namespace std;

class Name{
  char str[20];
public:
  Name(){ strcpy(str, ""); }
  Name(char *s){ strcpy(str,s); }
  char *get() { return str; }
};

bool operator<(Name a, Name b) {
  return strcmp(a.get(), b.get()) < 0;
}

class PhoneNum{
  char str[20];
public:
  PhoneNum() { strcpy(str, ""); }
  PhoneNum(char *s) { strcpy(str, s); }
  char* get() { return str; }
};

int main() {
  map<Name, PhoneNum> m;

  m.insert(pair<Name, PhoneNum>(Name("Taro"),    PhoneNum("090-1111-2222")));
  m.insert(pair<Name, PhoneNum>(Name("Jun"),     PhoneNum("090-3333-4444")));
  m.insert(pair<Name, PhoneNum>(Name("Yumiko"),  PhoneNum("090-5555-6666")));
  m.insert(pair<Name, PhoneNum>(Name("Sachiko"), PhoneNum("090-7777-8888")));

  char str[20];
  cout << "input words: " << endl;
  cin >> str;

  map<Name, PhoneNum>::iterator p;
  p = m.find(Name(str));
  if(p != m.end()) {
    cout << "Phone Number: " << p->second.get() << endl;
  } else {
    cout << "no match in a dictionary." << endl;
  } 
  return 0;
}
