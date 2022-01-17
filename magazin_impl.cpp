//
// Created by AC on 1/17/2022.
//

#include "magazin.cpp"

template class magazin<int>;
template class magazin<double>;

template
ostream& operator<< <>(ostream& os, const magazin<int>& x);

template
ostream& operator<< <>(ostream& os, const magazin<double>& x);

