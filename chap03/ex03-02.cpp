#include <iostream>
using namespace std;

#define QUEUE_SIZE 100
class Queue {
  int data[QUEUE_SIZE];
  int head;
  int tail;
public:
  Queue():head(0), tail(0) {};
  void push(int num);
  int pop();
};

void Queue::push(int num)
{
  if ((tail+1==head) || ((tail+1 == QUEUE_SIZE) && !head)){
    cout << "queue is full. you can't push " << num << endl;
    return;
  }
  tail = (tail+1) % QUEUE_SIZE;
  data[tail] = num;
}

int Queue::pop(){
  if (head == tail) {
    cout << "stack is empty" << endl;
    return 0;
  }
  head = (head+1)%QUEUE_SIZE;
  return data[head];
}

int main()
{
  Queue q1;
  Queue q2;
  int i;
  for (i = 0; i < 10; i++) {
    q1.push(i);
  }
  q2 = q1;
  for(i = 0; i < 10; i++){
    cout << q1.pop() << endl;
  }
  for(i = 0; i < 10; i++) {
    cout << q2.pop() << endl;;
  }
}
