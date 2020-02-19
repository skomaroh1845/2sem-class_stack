#ifndef subforwardlist_h
#define subforwardlist_h
#include "parent_stack.h"

class subforwardlist: public ParentStack {
public:
    subforwardlist(int a);
    ~subforwardlist();
    void push_back(int a);
    void print();
    int pop_back();
    unsigned int size_list();
private:
    int data;
    subforwardlist* next;
};

#endif


