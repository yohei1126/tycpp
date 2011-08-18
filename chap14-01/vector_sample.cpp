#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> v(5,1);

  cout << "size = " << v.size() << endl;
  cout << "initial state: " << endl;
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
  cout << endl << endl;

  vector<int>::iterator p = v.begin();
  p += 2;

  v.insert(p, 10, 9);

  cout << "size after insert = " << v.size() << endl;
  cout << "state after insert:" << endl;
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
  cout << endl << endl;

  p = v.begin();
  p += 2;
  v.erase(p, p+10);

  cout << "size after delete = " << v.size() << endl;
  cout << "state after delete:" << endl;
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
  cout << endl << endl;

  return 0;
}
