//
// Created by AC on 11/29/2021.
//

#ifndef MAGAZINE_JOCURI_VIDEO_EROARE_PERSONAJ_H
#define MAGAZINE_JOCURI_VIDEO_EROARE_PERSONAJ_H

#include <stdexcept>
#include <string>

using namespace std;

class eroare_personaj : public runtime_error {
public:
    eroare_personaj(const string &arg);
};

class inaltime_invalida : public eroare_personaj {
public:
    inaltime_invalida();
};

class rase_nefolosite : public eroare_personaj {
public:
    rase_nefolosite();
};

class eroare_functionalitate : public runtime_error {
public:
    eroare_functionalitate(const string &arg);
};

class eroare_pret_total : public eroare_functionalitate {
public:
    eroare_pret_total();
};

class eroare_distanta : public eroare_functionalitate {
public:
    eroare_distanta();
};

class eroare_gasire_magazin : public eroare_functionalitate {
public:
    eroare_gasire_magazin();
};

class eroare_gasire_joc : public eroare_functionalitate {
public:
    eroare_gasire_joc();
};

#endif //MAGAZINE_JOCURI_VIDEO_EROARE_PERSONAJ_H
