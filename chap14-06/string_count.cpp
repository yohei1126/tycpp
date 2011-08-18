#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
  string str;
  cout << "input words:";
  cin >> str;
  cout << str << endl;
  cout << "number of character 'e':";
  cout << count(str.begin(), str.end(), 'e') << endl;

  return 0; 
}
