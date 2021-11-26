//
// Created by AC on 11/26/2021.
//

#include "warrior.h"

warrior::warrior(const string &nume, int inaltime, const string &rasa, int nivel, const string &weapon) :
personaj(nume, inaltime, rasa), nivel(nivel), weapon(weapon) {}

void warrior::welcome_message() const {
    cout << "Welcome warrior! Your weapon of choice is " << weapon << ".\n";
}

warrior::~warrior() {

}

shared_ptr<personaj> warrior::clone() const {
    return make_shared <warrior>(*this);
}

void warrior::afis(ostream &os) const {
    os << nivel << " " << weapon << " ";
    personaj::afis(os);

}


