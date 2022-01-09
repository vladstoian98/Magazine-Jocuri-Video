//
// Created by AC on 11/26/2021.
//

#include "warrior.h"



void warrior::game_ability() {
    main_weapon = weapons.back();
    weapons.pop_back();
    main_foe = foes.back();
    foes.pop_back();
    cout << "Welcome warrior! Your weapon of choice is the following: " << main_weapon << ".\n";
    cout << "With this weapon you will fight the next opponent: " << main_foe << ".\n\n";
}

warrior::~warrior() {}

shared_ptr<personaj> warrior::clone() const {
    return make_shared <warrior>(*this);
}

void warrior::afis(ostream &os) const {
    os << nivel << " " << main_weapon << " " << main_foe << " ";
    personaj::afis(os);
}

warrior::warrior(const string &nume, int inaltime, const string &rasa, int boss_number, int nivel, const string &mainWeapon,
                 const vector<string> &weapons, const string &mainFoe, const vector<string> &foes) :personaj(nume, inaltime, rasa, boss_number),
                                                                                                    nivel(nivel),
                                                                                                    main_weapon(mainWeapon),
                                                                                                    weapons(weapons),
                                                                                                    main_foe(mainFoe),
                                                                                                    foes(foes) {}






