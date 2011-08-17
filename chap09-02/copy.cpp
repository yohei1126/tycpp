#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[]){
  if(argc!=3){
    cout << "usage: copy <input file> <output file>" << endl;
    return 1;
  }

  ifstream fin(argv[1]);
  ofstream fout(argv[2]);

  if(!fout) {
    cout << "cannot open output file." << endl;
    return 1;
  }
  if(!fin) {
    cout << "cannot open input file." << endl;
  }

  int chNum;
  char ch;

  fin.unsetf(ios::skipws); // don't skip space
  while(!fin.eof()){
    fin >> ch;
    if(!fin.eof()) {
      fout << ch;
      chNum++;
    }
  }

  cout << chNum << " characters copied." << endl;

  fin.close();
  fout.close();
  return 0;
}
