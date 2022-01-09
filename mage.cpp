//
// Created by AC on 11/27/2021.
//

#include "mage.h"



void mage::game_ability() {
    if(total_mana >= spell_cost) {
        cout << "Welcome mage! Your spell of choice is " << spell << ".\n";
        cout << "By casting this spell you used this amount of mana: " << spell_cost << ".\n";
        total_mana = total_mana - spell_cost;
        cout << "Your new mana total is: " << total_mana << ".\n\n";
    }
    else
        cout << "You are out of mana!\n\n";
}

mage::~mage() {}

shared_ptr<personaj> mage::clone() const {
    return make_shared <mage>(*this);
}

void mage::afis(ostream &os) const {
    os << total_mana << " " << spell << " " << " " << spell_cost;
    personaj::afis(os);
}

mage::mage(const string &nume, int inaltime, const string &rasa, int bossNumber, int totalMana, const string &spell,
           int spellCost) : personaj(nume, inaltime, rasa, bossNumber), total_mana(totalMana), spell(spell),
                            spell_cost(spellCost) {}
