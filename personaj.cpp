//
// Created by AC on 10/30/2021.
//

#include <vector>
#include "personaj.h"

int personaj::id_max = 1;

void personaj::afis(ostream &os) const{
    const auto &personaj = *this;
    os << personaj.nume << " " << personaj.inaltime << " " << personaj.rasa << endl;
}

personaj::personaj(const string &nume, int inaltime, const string &rasa): nume(nume),
                    inaltime(inaltime), rasa(rasa), id(id_max){
    id_max++;
}

personaj &personaj::operator=(const personaj &copie) {
    this->nume = copie.nume;
    this->inaltime = copie.inaltime;
    this->rasa = copie.rasa;
    return *this;
}

personaj::personaj(const personaj &copie): id(id_max), nume(copie.nume), inaltime(copie.inaltime),
                    rasa(copie.rasa){
    id_max++;
}

ostream &operator<<(ostream &os, const personaj &personaj) {
    personaj.afis(os);
    return os;
}

personaj::~personaj(){}

int personaj::getIdMax(){
    return id_max;
}
