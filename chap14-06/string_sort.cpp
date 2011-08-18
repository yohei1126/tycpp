#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  vector<string> v;

  v.push_back("one");
  v.push_back("two");
  v.push_back("three");
  v.push_back("four");
  v.push_back("five");
  v.push_back("six");
  v.push_back("sevem");
  v.push_back("eight");
  v.push_back("nine");
  v.push_back("ten");

  cout << "original:" << endl;
  for (int i=0; i < v.size(); i++) {
    cout << " " << v[i] << endl;;
  }
  sort(v.begin(), v.end());

  cout << "sord:" << endl;
  for (int i = 0; i< v.size(); i++) {
    cout << " " << v[i] << endl;
  }

  return 0;
}
