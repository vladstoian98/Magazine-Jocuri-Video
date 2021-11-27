//
// Created by AC on 10/30/2021.
//

#include "joc.h"

void joc::adauga(const personaj &personaj_) {
    personaje.push_back(personaj_.clone());
}

joc::joc(const string &nume, int pret) : nume(nume), pret(pret) {}

int joc::getPret() const {
    return pret;
}

ostream &operator<<(ostream &os, const joc &jocuri) {
    os << jocuri.nume << " " << jocuri.pret << " " << endl << endl;
    for (const auto &p: jocuri.personaje)
        os << p;
    os << endl;
    return os;
}

joc::joc(const joc &copie) : nume(copie.nume), pret(copie.pret) {
    for(const auto &personaj: copie.personaje)
        personaje.push_back(personaj->clone());
}

joc &joc::operator=(joc copie) {
    swap(*this, copie);
    return *this;
}


