//
// Created by AC on 10/30/2021.
//

#include "aplicatie.h"

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

void aplicatie::distanta_din_centru_pana_la_magazin(const aplicatie &aplicatie) {
    float distanta;
    for(const auto & m : aplicatie.magazine)
    {
        if(m.getOras() == "Constanta")
        {
            distanta =  sqrt(pow(m.getCoordonataX(), 2) + pow(m.getCoordonataY(), 2));
            cout << distanta << endl;
        }
    }
    cout << endl;
}
