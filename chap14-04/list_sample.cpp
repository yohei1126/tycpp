#include <iostream>
#include <list>
using namespace std;

int main(){
  list<char> lst;

  for (int i = 0; i < 10; i++) {
    lst.push_back('A' + i);
  }

  cout << "size = " << lst.size() << endl;
  cout << "content: ";
  list<char>::iterator p;
  while(!lst.empty()) {
    p = lst.begin();
    cout << *p;
    lst.pop_front();
  }
  cout << endl;

  return 0;
}
