#include <iostream>
#include <map>
#include <cstring>
using namespace std;

class word{
  char str[20];
  public:
  word(){ strcpy(str, ""); }
  word(char *s){ strcpy(str,s); }
  char *get() { return str; }
};

bool operator<(word a, word b) {
  return strcmp(a.get(), b.get()) < 0;
}

class opposite{
  char str[20];
public:
  opposite() { strcpy(str, ""); }
  opposite(char *s) { strcpy(str, s); }
  char* get() { return str; }
};

int main() {
  map<word, opposite> m;

  m.insert(pair<word, opposite>(word("yes"),  opposite("no")));
  m.insert(pair<word, opposite>(word("good"), opposite("bad")));
  m.insert(pair<word, opposite>(word("left"), opposite("right")));
  m.insert(pair<word, opposite>(word("up"),   opposite("down")));

  char str[20];
  cout << "input words: " << endl;
  cin >> str;

  map<word, opposite>::iterator p;
  p = m.find(word(str));
  if(p != m.end()) {
    cout << "opposite: " << p->second.get() << endl;
  } else {
    cout << "no match in a dictionary." << endl;
  } 
  return 0;
}
