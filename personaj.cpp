//
// Created by AC on 10/30/2021.
//

#include <vector>
#include "personaj.h"
#include "eroare_personaj.h"

int personaj::id_max = 1;

void personaj::afis(ostream &os) const{
    const auto &personaj = *this;
    os << personaj.nume << " " << personaj.inaltime << " " << personaj.rasa << " " << personaj.boss_number << endl;
}

personaj::personaj(const string &nume, int inaltime, const string &rasa, int boss_number): nume(nume),
                                                                                           inaltime(inaltime), rasa(rasa), id(id_max), boss_number(boss_number){
    id_max++;
    if(inaltime < 100 || inaltime > 250)
        throw inaltime_invalida();
    if(rasa == "Death knight" || rasa == "Dragon")
        throw rase_nefolosite();
}

personaj &personaj::operator=(const personaj &copie) {
    this->nume = copie.nume;
    this->inaltime = copie.inaltime;
    this->rasa = copie.rasa;
    this->boss_number = copie.boss_number;
    return *this;
}

personaj::personaj(const personaj &copie): id(id_max), nume(copie.nume), inaltime(copie.inaltime),
                                           rasa(copie.rasa), boss_number(copie.boss_number){
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

int personaj::getBossNumber() const {
    return boss_number;
}
