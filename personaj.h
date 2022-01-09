//
// Created by AC on 10/30/2021.
//

#ifndef MAGAZINE_JOCURI_VIDEO_PERSONAJ_H
#define MAGAZINE_JOCURI_VIDEO_PERSONAJ_H

#include <string>
#include <iostream>
#include <memory>

using namespace std;

class personaj {
    const int id;
    static int id_max;
protected:
    string nume;
    int inaltime; // In centimetri.
    string rasa;
    int boss_number;
    virtual void afis(ostream &os) const;
public:
    personaj(const string &nume, int inaltime, const string &rasa, int boss_number);

    personaj& operator =(const personaj& copie);

    personaj(const personaj& copie);

    friend ostream &operator<<(ostream &os, const personaj &personaje);

    virtual void game_ability() = 0;

    virtual shared_ptr <personaj> clone() const = 0;

    virtual ~personaj() = 0;

    static int getIdMax();

    int getBossNumber() const;
};


#endif //MAGAZINE_JOCURI_VIDEO_PERSONAJ_H
