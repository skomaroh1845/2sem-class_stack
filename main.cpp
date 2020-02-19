#include "subforwardlist.h"
#include "subvector.h"

#include <iostream>

using namespace std;

int main() {
    cout << "start stack" << endl;
    subforwardlist sub(10);
    sub.push_back(20);
    sub.push_back(30);
    sub.print();
    cout << endl;
    cout << "end stack" << endl;

    cout << "start vector" << endl;
    subvector vec;
    vec.push_back(11);
    vec.push_back(21);
    vec.push_back(31);
    vec.print();
    cout << "end vector" << endl;
    return 0;
}

