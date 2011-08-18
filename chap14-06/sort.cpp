#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector<char> v;

  for (int i=0; i < 10; i++) {
    v.push_back('A' + (rand()%26));
  }
  cout << "original: " << endl;
  vector<char>::iterator p = v.begin();
  while(p != v.end()){
    cout << *p;
    p++;
  }
  cout << endl;

  sort(v.begin(), v.end());

  cout << "sort: " << endl;
  p = v.begin();
  while(p != v.end()){
    cout << *p;
    p++;
  }

  cout << endl;
  return 0;
}
