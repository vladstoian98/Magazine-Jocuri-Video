//
// Created by AC on 11/29/2021.
//

#ifndef MAGAZINE_JOCURI_VIDEO_EROARE_PERSONAJ_H
#define MAGAZINE_JOCURI_VIDEO_EROARE_PERSONAJ_H

#include <stdexcept>
#include <string>

using namespace std;

class eroare_personaj : public runtime_error{
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

#endif //MAGAZINE_JOCURI_VIDEO_EROARE_PERSONAJ_H
