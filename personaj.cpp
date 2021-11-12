//
// Created by AC on 10/30/2021.
//

#include "personaj.h"

personaj::personaj(const string &nume, int inaltime, const string &rasa) {
    this->nume = nume;
    this->inaltime = inaltime;
    this->rasa = rasa;
}

personaj &personaj::operator=(const personaj &copie) {
    this->nume = copie.nume;
    this->inaltime = copie.inaltime;
    this->rasa = copie.rasa;
    return *this;
}

personaj::personaj(const personaj &copie) {
    this->nume = copie.nume;
    this->inaltime = copie.inaltime;
    this->rasa = copie.rasa;
}

ostream &operator<<(ostream &os, const personaj &personaje) {
    os << personaje.nume << " " << personaje.inaltime << " " << personaje.rasa << endl;
    return os;
}
