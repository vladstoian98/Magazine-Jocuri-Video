//
// Created by AC on 10/30/2021.
//

#include "joc.h"

void joc::adauga(personaj p) {
    personaje.push_back(p);
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



