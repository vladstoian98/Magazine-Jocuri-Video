//
// Created by AC on 11/26/2021.
//

#ifndef MAGAZINE_JOCURI_VIDEO_WARRIOR_H
#define MAGAZINE_JOCURI_VIDEO_WARRIOR_H

#include <ostream>
#include "personaj.h"
#include <vector>
#include <string>

using namespace std;

class warrior : public personaj {
    int nivel;
    string main_weapon;
    vector<string> weapons;
    string main_foe;
    vector<string> foes;


public:
    warrior(const string &nume, int inaltime, const string &rasa, int boss_number, int nivel, const string &mainWeapon,
            const vector<string> &weapons, const string &mainFoe, const vector<string> &foes);

    void game_ability() override;

    ~warrior();

    shared_ptr <personaj> clone() const override;




protected:
    void afis(ostream &os) const override;
};


#endif //MAGAZINE_JOCURI_VIDEO_WARRIOR_H
