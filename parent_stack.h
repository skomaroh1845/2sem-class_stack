#ifndef parent_stack_h
#define parent_stack_h

class ParentStack {
public:
    virtual void push_back(int d) = 0;
    virtual int pop_back() = 0;
    virtual void print() = 0;
};
#endif // parent_stack_h
