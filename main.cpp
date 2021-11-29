#include <iostream>
#include <vector>
#include <cstring>
#include <cmath>

#include "personaj.h"
#include "joc.h"
#include "magazin.h"
#include "aplicatie.h"
#include "warrior.h"
#include "archer.h"
#include "mage.h"
#include "eroare_personaj.h"

using namespace std;

int main() {

    try {
        warrior p1 = warrior("Gimli", 145, "Dwarf", 15, "Frost staff");
        archer p2 = archer("Ligolas", 185, "Elf", 21, "Bow of swiftness");
        mage p3 = mage("Gandalf", 190, "Human", 13, "Earth staff");
        warrior p4 = warrior("Golum", 120, "unknown", 61, "Fists");
        warrior p5 = warrior("Vlad", 190, "Human", 99, "Terra sword");
        mage p6 = mage("Anca", 170, "Human", 99, "Terra prisma");
        archer p7 = archer("Ashe", 170, "Human", 31, "Frost bow");
        warrior p8 = warrior("Trundle", 250, "Troll", 51, "Frost club");
        warrior p9 = warrior("Alex", 170, "Human", 11, "Diamond sword");
        archer p10 = archer("George", 180, "Gobilin", 2, "Beginne
    }
    catch(eroare_personaj &error) {
        cout << error.what() << endl;
    }


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