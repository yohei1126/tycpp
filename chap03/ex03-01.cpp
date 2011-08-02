#include <iostream>
using namespace std;

class cl1{
  int i,j;
public:
  cl1(int a, int b) {i=a; j=b;}
};

class cl2 : public cl1 {
  int i,j;
public:
  cl2(int a, int b) {i=a; i=b;}
};

int main()
{
  cl1 x(10,20);
  cl2 y(0,0);
  x = y;
  return 0;
}
