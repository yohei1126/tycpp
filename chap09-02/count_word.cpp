#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[]){
  if(argc!=2){
    cout << "usage: copy <input file> " << endl;
    return 1;
  }

  ifstream fin(argv[1]);

  if(!fin) {
    cout << "cannot open input file." << endl;
  }

  int wordNum = 0;
  char ch;
  bool isReadingWord = false;

  fin.unsetf(ios::skipws); // don't skip space
  while(!fin.eof()){
    fin >> ch;
    if (ch == ' ') {
      if (isReadingWord) {
	isReadingWord = false;
	wordNum++;
      }
    } else {
      isReadingWord = true;
    }
  }

  cout << wordNum << " words." << endl;

  fin.close();
  return 0;
}
