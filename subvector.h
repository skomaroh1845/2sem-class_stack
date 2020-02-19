#ifndef subvector_h
#define subvector_h
#include "parent_stack.h"

class subvector: public ParentStack {
public:
    subvector();
    ~subvector();
    void push_back(int d);
    int pop_back();
    void resize(unsigned int new_capacity);
    void shrink_to_fit();
    void clear();
    void print();
private:
    int *mas;
    unsigned int top;
    unsigned int capacity;
};

#endif

