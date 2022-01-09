//
// Created by AC on 11/27/2021.
//

#ifndef MAGAZINE_JOCURI_VIDEO_ARCHER_H
#define MAGAZINE_JOCURI_VIDEO_ARCHER_H

#include "personaj.h"
#include <ostream>

using namespace std;

class archer : public personaj {
    int nivel;
    int damage_delt;
public:
    archer(const string &nume, int inaltime, const string &rasa, int bossNumber, int nivel, int damageDelt);

    void game_ability() override;

    ~archer();

    shared_ptr <personaj> clone() const override;

protected:
    void afis(ostream &os) const override;
};


#endif //MAGAZINE_JOCURI_VIDEO_ARCHER_H
