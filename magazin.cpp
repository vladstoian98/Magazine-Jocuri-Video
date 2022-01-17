//
// Created by AC on 10/30/2021.
//

#include "magazin.h"
#include "eroare_personaj.h"

template <typename T>
void magazin<T>::adauga(joc j) {
    jocuri.push_back(j);
}

template <typename T>
magazin<T>::magazin(const string &nume, const string &judet, const string &oras, int copii_jocuri, T coordonata_x,
                 T coordonata_y) : nume(nume), judet(judet), oras(oras), copii_jocuri(copii_jocuri),
                                     coordonata_x(coordonata_x), coordonata_y(coordonata_y){}

template <typename T>
void magazin<T>::setJudet(const string &judet) {
    magazin<T>::judet = judet;
}

template <typename T>
void magazin<T>::setOras(const string &oras) {
    magazin<T>::oras = oras;
}

template <typename T>
void magazin<T>::setCoordonataX(T coordonataX) {
    coordonata_x = coordonataX;
}

template <typename T>
void magazin<T>::setCoordonataY(T coordonataY) {
    coordonata_y = coordonataY;
}

template <typename T>
const string &magazin<T>::getOras() const {
    return oras;
}

template <typename T>
int magazin<T>::getCoordonataX() const {
    return coordonata_x;
}

template <typename T>
int magazin<T>::getCoordonataY() const {
    return coordonata_y;
}

template <typename T>
ostream &operator<<(ostream &os, const magazin<T> &magazine) {
    os << magazine.nume << " " << magazine.judet << " " << magazine.oras << " "<< endl << endl;
    for(const auto & j : magazine.jocuri)
        os << j ;
    os << endl;
    return os;
}

template <typename T>
int magazin<T>::pret_total() {
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

template <typename T>
joc& magazin<T>::cautare(const string &nume) {
    for(auto & j : jocuri)
        if(nume == j.getNume())
            return j;
    throw eroare_gasire_joc();
}

template <typename T>
void magazin<T>::inlocuire(joc &j, string nume_joc, int pret_joc, vector<shared_ptr<personaj>> v) {
    j.setNume(nume_joc);
    j.setPret(pret_joc);
    j.schimb_personaje(v);
}

