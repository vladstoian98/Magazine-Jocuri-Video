//
// Created by AC on 11/27/2021.
//

#ifndef MAGAZINE_JOCURI_VIDEO_MAGE_H
#define MAGAZINE_JOCURI_VIDEO_MAGE_H

#include "personaj.h"
#include <ostream>

using namespace std;

class mage : public personaj {
    int total_mana;
    string spell;
    int spell_cost;
public:
    mage(const string &nume, int inaltime, const string &rasa, int bossNumber, int totalMana, const string &spell, int spellCost);

    void game_ability() override;

    ~mage();

    shared_ptr <personaj> clone() const override;
protected:
    void afis(ostream &os) const override;
};


#endif //MAGAZINE_JOCURI_VIDEO_MAGE_H
