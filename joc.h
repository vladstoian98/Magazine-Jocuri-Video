//
// Created by AC on 10/30/2021.
//

#ifndef MAGAZINE_JOCURI_VIDEO_JOC_H
#define MAGAZINE_JOCURI_VIDEO_JOC_H

#include "personaj.h"
#include <vector>
#include <iostream>

using namespace std;

class joc {
    string nume;
    int pret;
    vector<personaj> personaje;
public:
    joc();
    void adauga(personaj p);

    joc(const string &nume, int pret);

    int getPret() const;

    friend ostream &operator<<(ostream &os, const joc &jocuri);

};


#endif //MAGAZINE_JOCURI_VIDEO_JOC_H