//
// Created by AC on 1/19/2022.
//

#include "set_lego_builder.h"

set_lego_builder &set_lego_builder::nr_oameni(int nr) {
    l.nr_oameni = nr;
    return *this;
}

set_lego_builder &set_lego_builder::nr_piese_constructie(int nr) {
    l.nr_piese_constructie = nr;
    return *this;
}

set_lego_builder &set_lego_builder::nr_sticker(int nr) {
    l.nr_sticker = nr;
    return *this;
}

set_lego_builder &set_lego_builder::tip_oameni(const string &tip) {
    l.tip_oameni = tip;
    return *this;
}

set_lego_builder &set_lego_builder::tip_piese(const string &tip) {
    l.tip_piese = tip;
    return *this;
}

set_lego_builder &set_lego_builder::tip_sticker(const string &tip) {
    l.tip_sticker = tip;
    return *this;
}

set_lego set_lego_builder::build() {
    return l;
}

set_lego_builder &set_lego_builder::nume(const string &n) {
    l.nume = n;
    return *this;
}
