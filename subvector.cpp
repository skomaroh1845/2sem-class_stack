#include "subvector.h"

#include <iostream>

using namespace std;

subvector::subvector(){
        this->capacity = 1; //amount of elements
        this->top = 0; //last element;
        this->mas = NULL;
};

subvector::~subvector(){
        delete[] this->mas;
};

void subvector::push_back(int d){
    if (this->top+1 < this->capacity && this->mas != NULL)
    {
            this->top ++;
            this->mas[this->top] = d;
    }
    else
    {
        if (this->mas == NULL)
        {
            this->mas = new int[1];
            this->mas[0] = d;
        }
        else
        {
            //cout << "!!!" << this->top << " " << this->capacity << endl;
            int *m = new int [this->capacity + 1];
            for (int i = 0; i < this->top + 1; i++)
                m[i] = this->mas[i];
            m[this->top + 1] = d;
            this->top ++;
            this->capacity ++;
            delete[] this->mas;
            this->mas = m;
        }
    }
};

int subvector::pop_back(){
    if (this->top > 0)
    {
        this->top --;
        return this->mas[this->top+1];
    }
    else
    return this->mas[this->top];
};

void subvector::clear(){
    this->top = -1;
};

void subvector::resize(unsigned int new_capacity){
    cout << "  " << this->capacity << endl;
    int *m = new int [new_capacity];
    this->capacity = new_capacity;
    if (this->mas == NULL)
    {
        this->mas = m;
    }
    else
    {
        if (this->top < new_capacity) new_capacity = this->top;
        else new_capacity -= 1;
        for (int i = 0; i < new_capacity + 1; i++)
            m[i] = this->mas[i];
        delete[] this->mas;
        this->mas = m;
    }
    cout << "  " << this->capacity << endl;
};

void subvector::shrink_to_fit() {
    if (this->top + 1 == this->capacity);
    else
    {
        cout << "  " << this->capacity << endl;
        int *m = new int [this->top + 1];
        for (int i = 0; i < this->top + 1; i++)
        {
            m[i] = this->mas[i];
        }
        delete[] this->mas;
        this->mas = m;
        this->capacity = this->top + 1;
        cout << "  " << this->capacity << endl;
    }
};

void subvector::print() {
    if (this == NULL) cout << "ERROR vector empty" << endl;
    else
        for (int i = 0; i < this->top + 1; i++)
            cout << this->mas[i] << endl;
};

