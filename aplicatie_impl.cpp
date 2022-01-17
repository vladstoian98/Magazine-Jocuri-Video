//
// Created by AC on 1/17/2022.
//

#include "aplicatie.cpp"

template class aplicatie<int>;
template class aplicatie<double>;

template
ostream& operator<< <>(ostream& os, const aplicatie<int>& x);
template
ostream& operator<< <>(ostream& os, const aplicatie<double>& x);