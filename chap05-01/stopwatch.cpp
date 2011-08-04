#include <iostream>
#include <ctime>
using namespace std;
class stopwatch{
  double begin, end;
public:
  stopwatch():begin(0), end(0){};
  stopwatch(double time);
  ~stopwatch();
  void start();
  void stop();
  void show();
};

stopwatch::stopwatch(double time){
  end = begin = time;
}

stopwatch::~stopwatch(){
  show();
}

void stopwatch::start(){
  begin = clock() / CLOCKS_PER_SEC;;
}

void stopwatch::stop(){
  end = clock() / CLOCKS_PER_SEC;
}

void stopwatch::show(){
  cout << "elapse time: " << (end - begin) << endl; 
}

int main(){
  stopwatch st;

  st.start();
  for(int i=0; i < 1000000000; i++);
  st.stop();
  st.show();

  stopwatch st2(clock()/CLOCKS_PER_SEC);
  for (int i = 0; i < 1000000000; i++);
  st2.stop();
  st2.show();
 
  return 0;
}
