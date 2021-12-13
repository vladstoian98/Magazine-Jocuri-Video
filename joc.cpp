//
// Created by AC on 10/30/2021.
//

#include "joc.h"

void joc::adauga(const personaj &personaj_) {
    personaje.push_back(personaj_.clone());
}

joc::joc(const string &nume, int pret) : nume(nume), pret(pret) {}

void joc::setNume(const string &nume) {
    joc::nume = nume;
}

void joc::setPret(int pret) {
    joc::pret = pret;
}

const string &joc::getNume() const {
    return nume;
}

int joc::getPret() const {
    return pret;
}

ostream &operator<<(ostream &os, const joc &jocuri) {
    os << jocuri.nume << " " << jocuri.pret << " " << endl << endl;
    for (const auto &p: jocuri.personaje)
        os << *p;
    os << endl;
    return os;
}

joc::joc(const joc &copie) : nume(copie.nume), pret(copie.pret) {
    for(const auto &personaj: copie.personaje)
        personaje.push_back(personaj->clone());
}

joc &joc::operator=(joc copie) {
    swap(*this, copie);
    return *this;
}

void swap(joc &j1, joc &j2) {
    using std::swap;
    swap(j1.personaje, j2.personaje);
    swap(j1.nume, j2.nume);
    swap(j1.pret, j2.pret);
}

joc::~joc() {}

void joc::welcome_message() {
    for(auto &personaj: personaje) {
        cout << "Bine ai venit in jocul " << nume << "!\n";
        personaj->welcome_message();
    }
}

void joc::schimb_personaje() {
    personaje.clear();
    warrior p11 = warrior("Mario", 150, "Human", 99, "Stomping boots");
    mage p12 = mage("Peach", 170, "Human", 1, "Umbrella");
    adauga(p11); adauga(p12);
}

vector<shared_ptr<personaj>> &joc::getPersonaje() {
    return personaje;
}










