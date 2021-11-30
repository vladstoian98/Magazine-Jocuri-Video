//
// Created by AC on 11/29/2021.
//

#include "eroare_personaj.h"
#include <string>

eroare_personaj::eroare_personaj(const string &arg) :
        runtime_error("Eroare cantec: " + arg) {}

inaltime_invalida::inaltime_invalida() :
        eroare_personaj("Inaltime invalida") {}

rase_nefolosite::rase_nefolosite() :
        eroare_personaj("Aceasta rasa nu poate fi folosita"){}

eroare_functionalitate::eroare_functionalitate(const string &arg) :
        runtime_error("Eroare functionalitate: " + arg) {}

eroare_pret_total::eroare_pret_total() :
        eroare_functionalitate("Pretul total al magazinului este invalid") {};

eroare_distanta::eroare_distanta() :
        eroare_functionalitate("Distanta este una invialida") {};