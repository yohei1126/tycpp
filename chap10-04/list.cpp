#include <iostream>
#include <cstdlib>
#include <cctype>
using namespace std;

class list{
public:
  list *head;
  list *tail;
  list *next;
  int num;
  list(){ head = tail = next = NULL; }
  virtual void store(int i) = 0;
  virtual int retrieve() = 0;
};

class sorted : public list {
public:
  void store(int i);
  int retrieve(); 
};

// sorted list
void sorted::store(int i) {
  list *item;
  list *p, *p2;
  item = new sorted;

  if (!item) {
    cout << "memory allocation error.";
    exit(1);
  }
  item->num = i;

  p = head;
  p2 = NULL;
  // find a position of new item
  while(p) {
    if (p->num > i) {
      item->next = p;
      if(p2) p2->next = item;    // not head
      if(p == head) head = item; // new head item
      break;
    }
    p2 = p;
    p = p->next;
  }

  if(!p){
    if (tail) tail->next = item;
    tail = item;
    item->next = NULL;
  }
  if(!head){
    head = item;
  }
}

int sorted::retrieve() {
  int i;
  list *p;

  if (!head) {
    cout << "list is empty." << endl;
    return 0;
  }

  i = head->num;
  p = head;
  head = head->next;
  delete p;
  return i;
}

int main(){
  sorted s;
  cout << s.retrieve() << endl;

  s.store(1);
  s.store(3);
  s.store(10);
  s.store(0);
  s.store(22);

  cout << s.retrieve() << endl;
  cout << s.retrieve() << endl;
  cout << s.retrieve() << endl;
  cout << s.retrieve() << endl;
  cout << s.retrieve() << endl;

  return 0;
}
