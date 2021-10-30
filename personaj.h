//
// Created by AC on 10/30/2021.
//

#ifndef MAGAZINE_JOCURI_VIDEO_PERSONAJ_H
#define MAGAZINE_JOCURI_VIDEO_PERSONAJ_H

#include <string>
#include<iostream>
using namespace std;

class personaj {
    string nume;
    int inaltime; // In centimetri.
    string rasa;
public:
    personaj(const string &nume, int inaltime, const string &rasa);

    personaj& operator =(const personaj& copie);

    personaj(const personaj& copie);

    friend ostream &operator<<(ostream &os, const personaj &personaje);
};


#endif //MAGAZINE_JOCURI_VIDEO_PERSONAJ_H
