// Implement  ClassPairTemplate class constructor and print methods
#ifndef CLASS_PAIR_TEMPLATE_TPP
#define CLASS_PAIR_TEMPLATE_TPP

#include <iostream>
using namespace std;

template <typename T1, typename T2>
Pair<T1, T2>::Pair(T1 a, T2 b) : first(a), second(b) {}

template <typename T1, typename T2>
void Pair<T1, T2>::print() const
{
    cout << "(" << first << ", " << second << ")" << endl;
}

#endif
