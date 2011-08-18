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
  int size = lst.size();
  for (int i = 0; i < size; i++) {
    p = lst.begin();
    cout << *p;
    lst.pop_front();
    lst.push_back(*p);
  }
  cout << endl << "size = " << lst.size() << endl; 

  return 0;
}
