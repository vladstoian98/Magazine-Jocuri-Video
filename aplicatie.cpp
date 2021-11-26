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

float aplicatie::distanta_din_centru_pana_la_magazin(float x, float y, string oras) {
    float distanta;
    for(const auto & m : magazine)
    {
        if(m.getOras() == oras)
        {
            distanta =  sqrt(pow(m.getCoordonataX() - x, 2) + pow(m.getCoordonataY() - y, 2));

        }
    }
   return distanta;
}


