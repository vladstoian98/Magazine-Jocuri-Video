//
// Created by AC on 10/30/2021.
//

#include "aplicatie.h"
#include "eroare_personaj.h"

template <typename T>
void aplicatie<T>::adauga(magazin<T> m) {
    magazine.push_back(m);
}

template <typename T>
aplicatie<T>::aplicatie(const string &nume) : nume(nume) {}

template <typename T>
ostream &operator<<(ostream &os, const aplicatie<T> &aplicatie) {
    os << aplicatie.nume << endl << endl;
    for(const auto & m : aplicatie.magazine)
        os << m;
    os << endl;
    return os;
}

template <typename T>
float aplicatie<T>::distanta_din_centru_pana_la_magazin(int x, int y, string oras) {
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

template <typename T>
magazin<T>& aplicatie<T>::cautare(const string &nume_oras, T x, T y) {
    for(auto & i : magazine)
        if(nume_oras == i.getOras() && x == i.getCoordonataX() && y == i.getCoordonataY())
            return i;
    throw eroare_gasire_magazin();
}

template <typename T>
void aplicatie<T>::inlocuire(magazin<T>& m, string oras, string judet, T coordonata_x, T coordonata_y, const vector<set_lego> &legos) {
    m.setOras(oras);
    m.setJudet(judet);
    m.setCoordonataX(coordonata_x);
    m.setCoordonataY(coordonata_y);
    m.setLegos(legos);
}


