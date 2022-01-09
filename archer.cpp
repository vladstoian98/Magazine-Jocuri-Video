//
// Created by AC on 11/27/2021.
//

#include "archer.h"



void archer::game_ability() {
    cout << "Welcome archer! Your next shot will deal " << damage_delt << " damage.\n";
    nivel++;
    damage_delt = damage_delt + 2;
    cout << "Congrats! After your last performance you have leveled up! Your new level is: " << nivel <<". Your next shot will deal " << damage_delt << " damage.\n\n";
}

archer::~archer() {}

shared_ptr<personaj> archer::clone() const {
    return make_shared <archer>(*this);
}

void archer::afis(ostream &os) const {
    os << nivel << " " << damage_delt << " ";
    personaj::afis(os);
}

archer::archer(const string &nume, int inaltime, const string &rasa, int bossNumber, int nivel, int damageDelt)
        : personaj(nume, inaltime, rasa, bossNumber), nivel(nivel), damage_delt(damageDelt) {}
