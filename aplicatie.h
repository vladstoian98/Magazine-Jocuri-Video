//
// Created by AC on 10/30/2021.
//

#ifndef MAGAZINE_JOCURI_VIDEO_APLICATIE_H
#define MAGAZINE_JOCURI_VIDEO_APLICATIE_H

#include <iostream>
#include <string>
#include "magazin.h"
#include <cmath>

using namespace std;

class aplicatie {
    string nume;
    vector<magazin> magazine;
public:
    void adauga(magazin m);

    aplicatie(const string &nume);

    friend ostream &operator<<(ostream &os, const aplicatie &aplicatie);

    float distanta_din_centru_pana_la_magazin(float x, float y, string oras);

    magazin& cautare(const string &nume_oras, int x, int y);

    void inlocuire(magazin& m); // Schimb locatia unui magazin, adica orasul, judetul si coordonatele (numele magazinului si stocul de jocuri ale acestuia raman la fel).
};


#endif //MAGAZINE_JOCURI_VIDEO_APLICATIE_H
