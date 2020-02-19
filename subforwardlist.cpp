#include "subforwardlist.h"

#include <iostream>

using namespace std;

subforwardlist::subforwardlist(int a){
    this->next = NULL;
    this->data = a;
};

subforwardlist::~subforwardlist(){
    while (this->size_list() > 1)
       this->pop_back();
   // cout << "clean completed" << endl;
};

void subforwardlist::print() {
    subforwardlist* l = this;
    while (l != NULL)
    {
        cout << l->data << " ";
        l = l->next;
    }
}

void subforwardlist::push_back(int a){
    subforwardlist *l = this;
    while (l->next != NULL)
        l = l->next;

    subforwardlist *new_el = new subforwardlist(a);
    l->next = new_el;
};

int subforwardlist::pop_back(){
    if (this->next != NULL)
    {
        subforwardlist *l1 = this;
        while (l1->next != NULL)
        {
            l1 = l1->next;
        }
        subforwardlist *l2 = this;
        while (l2->next != l1)
        {
            l2 = l2->next;
        }
        int a = l1->data;
        delete l1;
        l2->next = NULL;
        return a;
    }
    else
    {
        int a = this->data;
        delete this;
        return a;
    }
};

unsigned int subforwardlist::size_list(){
    if (this == NULL) return 0;
    else
    {
        int i = 1;
        subforwardlist *l = this;
        while (l->next != NULL)
        {
            l = l->next;
            i++;
        }
        return i;
    }
};
