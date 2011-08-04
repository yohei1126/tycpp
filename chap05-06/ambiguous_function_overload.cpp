#include <iostream>
using namespace std;

void f(unsigned char c){
  cout << "unsigned char " << c << endl;
}

void f(char c){
  cout << "char " << c << endl;
}

int main(){
  f('c');
  //you cannot compile this program because 
  //call of overloaded ‘f(int)’ is ambiguous.
  //compiler cannot find out which function should be called. 
  f(86);
  return 0;
}
