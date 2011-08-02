#include <iostream>
using namespace std;

class who{
  char name;
public:
  who(char ch);
  ~who();
};

who::who(char ch):name(ch){
  cout << "this is " << name << "'s constructor." << endl;
}

who::~who(){
  cout << "this is " << name << "'s destructor." << endl;
}

who make_who(char ch) {
  cout << "before instance initialization in function make_who." << endl;
  who w(ch);
  cout << "after instance initialization in function make_who." << endl;
  return w;
}

int main(){
  cout << "before instance initialization in function main." << endl;
  who w1('a');
  cout << "after instance intialization in function main." << endl;
  cout << "before call make_who." << endl;
  make_who('b');
  cout << "after call make_who." << endl;

  return 0;
}
