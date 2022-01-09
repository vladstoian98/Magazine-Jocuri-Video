//
// Created by AC on 10/30/2021.
//

#include "aplicatie.h"
#include "eroare_personaj.h"

void aplicatie::adauga(magazin m) {
    magazine.push_back(m);
}

aplicatie::aplicatie(const string &nume) : nume(nume) {}

ostream &operator<<(ostream &os, const aplicatie &aplicatie) {
    os << aplicatie.nume << endl << endl;
    for(const auto & m : aplicatie.magazine)
        os << m;
    os << endl;
    return os;
}

float aplicatie::distanta_din_centru_pana_la_magazin(float x, float y, string oras) {
    float distanta;
    for(const auto & m : magazine)
    {
        if(m.getOras() == oras)
        {
            distanta =  sqrt(pow(m.getCoordonataX() - x, 2) + pow(m.getCoordonataY() - y, 2));

        }
    }

    if(distanta < 0.5 || distanta > 20) {
        throw eroare_distanta();
    }

    return distanta;
}

magazin& aplicatie::cautare(const string &nume_oras, int x, int y) {
    for(auto & i : magazine)
        if(nume_oras == i.getOras() && x == i.getCoordonataX() && y == i.getCoordonataY())
            return i;
    throw eroare_gasire_magazin();
}

void aplicatie::inlocuire(magazin& m, string oras, string judet, int coordonata_x, int coordonata_y) {
    m.setOras(oras);
    m.setJudet(judet);
    m.setCoordonataX(coordonata_x);
    m.setCoordonataY(coordonata_y);
}


