#include <iostream>
#include <vector>
#include <cstring>
#include <cmath>

#include "personaj.h"
#include "joc.h"
#include "magazin.h"
#include "aplicatie.h"

using namespace std;

int main() {
    personaj p1 = personaj("Gimli", 145, "Dwarf");
    personaj p2 = personaj("Ligolas", 185, "Elf");
    personaj p3 = personaj("Gandalf", 190, "Human");
    personaj p4 = personaj("Golum", 120, "unknown");
    personaj p5 = personaj("Vlad", 190, "Human");
    personaj p6 = personaj("Anca", 170, "Human");
    personaj p7 = personaj("Ashe", 170, "Human");
    personaj p8 = personaj("Trundle", 250, "Troll");
    personaj p9 = personaj("Alex", 170, "Human");
    personaj p10 = personaj("George", 180, "Gobilin");

    joc j1 = joc("Lord of the Rings Game", 60);
    j1.adauga(p1); j1.adauga(p2); j1.adauga(p3); j1.adauga(p4);

    joc j2 = joc("World of Warcraft", 15);
    j2.adauga(p5); j2.adauga(p6);

    joc j3 = joc("League of Legends", 10);
    j3.adauga(p7); j3.adauga(p8);

    joc j4 = joc("Terraria", 15);
    j4.adauga(p9); j4.adauga(p10);

    magazin m1 = magazin("Gamex", "Constanta", "Constanta", 30, 5, 5);
    m1.adauga(j1); m1.adauga(j2); m1.adauga(j3);

    magazin m2 = magazin("ING", "Sector 3", "Bucuresti", 40, 2, 3);
    m2.adauga(j2); m2.adauga(j3); m2.adauga(j4);

    magazin m3 = magazin("Game Company", "Tulcea", "Tulcea", 50, 1, 1);
    m3.adauga(j1); m3.adauga(j2); m3.adauga(j3); m3.adauga(j4);

    aplicatie a = aplicatie("Gamestop");
    a.adauga(m1); a.adauga(m2); a.adauga(m3);

    cout << m3 << endl << endl;

    cout << a.distanta_din_centru_pana_la_magazin(0, 0, "Constanta") << endl << endl;

    cout << a;

    return 0;
}





















