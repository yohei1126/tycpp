#include <iostream>
using namespace std;

class letters{
  char ch_;
public:
  letters(char ch):ch_(ch){};
  char get_ch(){return ch_;}
};

int main(){
  letters l[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

  for (int i = 0; i < sizeof(l)/sizeof(letters); i++){
    cout << l[i].get_ch() << endl;
  }
  return 0;
}
