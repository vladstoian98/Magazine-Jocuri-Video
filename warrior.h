//
// Created by AC on 11/26/2021.
//

#ifndef MAGAZINE_JOCURI_VIDEO_WARRIOR_H
#define MAGAZINE_JOCURI_VIDEO_WARRIOR_H

#include <ostream>
#include "personaj.h"

using namespace std;

class warrior : public personaj {
    int nivel;
    string weapon;
public:
    warrior(const string &nume, int inaltime, const string &rasa, int nivel, const string &weapon);

    void welcome_message() const;

    ~warrior();

    shared_ptr <personaj> clone() const override;

protected:
    void afis(ostream &os) const override;
};


#endif //MAGAZINE_JOCURI_VIDEO_WARRIOR_H
