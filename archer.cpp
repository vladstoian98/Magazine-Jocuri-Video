//
// Created by AC on 11/27/2021.
//

#include "archer.h"

archer::archer(const string &nume, int inaltime, const string &rasa, int nivel, const string &weapon) :
        personaj(nume, inaltime, rasa), nivel(nivel), weapon(weapon) {}

void archer::welcome_message() const {
    cout << "Welcome archer! Your weapon of choice is " << weapon << ".\n";
}

archer::~archer() {}

shared_ptr<personaj> archer::clone() const {
    return make_shared <archer>(*this);
}

void archer::afis(ostream &os) const {
    os << nivel << " " << weapon << " ";
    personaj::afis(os);
}