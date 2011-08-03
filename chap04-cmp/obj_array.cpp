#include "a_type.h"

int main(){
  a_type a[2][5] = {
    {a_type(1,1),   a_type(2,2),   a_type(3,3),  a_type(4,4), a_type(5,5)},
    {a_type(11,11), a_type(22,22), a_type(33,33), a_type(44,44), a_type(55,55)}
  };

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 5; j++) {
      a[i][j].show();
    }
  }

  return 0;
}
