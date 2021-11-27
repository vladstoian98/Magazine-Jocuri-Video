//
// Created by AC on 10/30/2021.
//

#ifndef MAGAZINE_JOCURI_VIDEO_JOC_H
#define MAGAZINE_JOCURI_VIDEO_JOC_H

#include "personaj.h"
#include <vector>
#include <iostream>
#include <memory>

using namespace std;

class joc {
    string nume;
    int pret;
    vector<shared_ptr<personaj>> personaje;
public:
    joc();
    void adauga(personaj p);

    joc(const string &nume, int pret);

    int getPret() const;

    friend ostream &operator<<(ostream &os, const joc &jocuri);

    joc(cont joc &copie);

    jov &operator=(joc copie);

};


#endif //MAGAZINE_JOCURI_VIDEO_JOC_H
