//
// Created by AC on 10/30/2021.
//

#include "magazin.h"
#include "eroare_personaj.h"

void magazin::adauga(joc j) {
    jocuri.push_back(j);
}

magazin::magazin(const string &nume, const string &judet, const string &oras, int copii_jocuri, int coordonata_x,
                 int coordonata_y) : nume(nume), judet(judet), oras(oras), copii_jocuri(copii_jocuri),
                                     coordonata_x(coordonata_x), coordonata_y(coordonata_y){}


void magazin::setJudet(const string &judet) {
    magazin::judet = judet;
}

void magazin::setOras(const string &oras) {
    magazin::oras = oras;
}

void magazin::setCoordonataX(int coordonataX) {
    coordonata_x = coordonataX;
}

void magazin::setCoordonataY(int coordonataY) {
    coordonata_y = coordonataY;
}

const string &magazin::getOras() const {
    return oras;
}

int magazin::getCoordonataX() const {
    return coordonata_x;
}

int magazin::getCoordonataY() const {
    return coordonata_y;
}

ostream &operator<<(ostream &os, const magazin &magazine) {
    os << magazine.nume << " " << magazine.judet << " " << magazine.oras << " "<< endl << endl;
    for(const auto & j : magazine.jocuri)
        os << j ;
    os << endl;
    return os;
}

int magazin::pret_total() {
    int s = 0;
    for(const auto & j : jocuri)
    {
        s = s + j.getPret() * copii_jocuri;
    }
    if(s < 1000 || s > 100000) {
        throw eroare_pret_total();
    }

    return s;
}

joc& magazin::cautare(const string &nume) {
    for(auto & j : jocuri)
        if(nume == j.getNume())
            return j;
    throw eroare_gasire_joc();
}

void magazin::inlocuire(joc &j, string nume_joc, int pret_joc) {
    j.setNume(nume_joc);
    j.setPret(pret_joc);
    j.schimb_personaje(); // vector<shared_ptr<personaj>> &personaje
}

