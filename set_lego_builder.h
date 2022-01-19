//
// Created by AC on 1/19/2022.
//

#ifndef MAGAZINE_JOCURI_VIDEO_SET_LEGO_BUILDER_H
#define MAGAZINE_JOCURI_VIDEO_SET_LEGO_BUILDER_H

#include <ostream>
#include <string>
#include "set_lego_builder.h"

using namespace std;

class set_lego {
    int nr_oameni;
    int nr_piese_constructie;
    int nr_piese_rezerva;
    int nr_sticker;
    string tip_oameni;
    string tip_piese;
    string tip_sticker;
    string nume;
    friend class set_lego_builder;
public:
    set_lego() = default;

    friend ostream &operator<<(ostream &os, const set_lego &lego);
};

class set_lego_builder {
    set_lego l;
public:
    set_lego_builder() = default;

    set_lego_builder& nr_oameni(int nr);

    set_lego_builder& nr_piese_constructie(int nr);

    set_lego_builder& nr_piese_rezerva(int nr){
        l.nr_piese_rezerva = nr;
        return *this;
    }

    set_lego_builder& nr_sticker(int nr);

    set_lego_builder& tip_oameni(const string& tip);

    set_lego_builder& tip_piese(const string& tip);

    set_lego_builder& tip_sticker(const string& tip);

    set_lego_builder& nume(const string &n);

    set_lego build();
};



#endif //MAGAZINE_JOCURI_VIDEO_SET_LEGO_BUILDER_H
