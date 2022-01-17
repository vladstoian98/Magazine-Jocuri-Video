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

template <typename T>
class aplicatie {
    string nume;
    vector<magazin<T>> magazine;
public:
    void adauga(magazin<T> m);

    aplicatie(const string &nume);

    friend ostream &operator<<(ostream &os, const aplicatie &aplicatie);

    float distanta_din_centru_pana_la_magazin(<T> x, <T> y, string oras);

    magazin<T>& cautare(const string &nume_oras, T x, T y);

    void inlocuire(magazin<T>& m, string oras, string judet, T coordonata_x, T coordonata_y); // Schimb locatia unui magazin, adica orasul, judetul si coordonatele (numele magazinului si stocul de jocuri ale acestuia raman la fel).
};


#endif //MAGAZINE_JOCURI_VIDEO_APLICATIE_H
