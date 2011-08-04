#include <iostream>
using namespace std;

void order(int &a, int &b){
  if (a > b) {
    int tmp = b;
    b = a;
    a = tmp;
  }
}

int main(){
  int a = 100;
  int b = 20;

  cout << "a " << a << " b " << b << endl;
  order(a,b);
  cout << "a " << a << " b " << b << endl;

  return 0;
}
