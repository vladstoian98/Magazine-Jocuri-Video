//
// Created by AC on 11/27/2021.
//

#include "mage.h"

mage::mage(const string &nume, int inaltime, const string &rasa, int nivel, const string &weapon) :
           personaj(nume, inaltime, rasa), nivel(nivel), weapon(weapon) {}

void mage::welcome_message() const {
    cout << "Welcome mage! Your weapon of choice is " << weapon << ".\n";
}

mage::~mage() {}

shared_ptr<personaj> mage::clone() const {
    return make_shared <mage>(*this);
}

void mage::afis(ostream &os) const {
    os << nivel << " " << weapon << " ";
    personaj::afis(os);
}