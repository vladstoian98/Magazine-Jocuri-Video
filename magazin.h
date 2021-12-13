//
// Created by AC on 10/30/2021.
//

#ifndef MAGAZINE_JOCURI_VIDEO_MAGAZIN_H
#define MAGAZINE_JOCURI_VIDEO_MAGAZIN_H

#include <iostream>
#include <string>
#include "joc.h"
#include "personaj.h"

using namespace std;

class magazin {
    string nume;
    string judet;
    string oras;
    int copii_jocuri;
    int coordonata_x;
    int coordonata_y;
    vector<joc> jocuri;
public:
    void adauga(joc j);

    magazin(const string &nume, const string &judet, const string &oras, int copii_jocuri, int coordonata_x, int coordonata_y);

    const string &getOras() const;

    void setJudet(const string &judet);

    void setOras(const string &oras);

    void setCoordonataX(int coordonataX);

    void setCoordonataY(int coordonataY);

    int getCoordonataX() const;

    int getCoordonataY() const;

    friend ostream &operator<<(ostream &os, const magazin &magazine);

    int pret_total();

    joc& cautare(const string &nume);

    void inlocuire(joc& j);
};


#endif //MAGAZINE_JOCURI_VIDEO_MAGAZIN_H
