#include <iostream>
#include <vector>
#include <cstring>
#include <cmath>
#include <memory>

#include "personaj.h"
#include "joc.h"
#include "magazin.h"
#include "aplicatie.h"
#include "warrior.h"
#include "archer.h"
#include "mage.h"
#include "eroare_personaj.h"

using namespace std;

void f1() {
    warrior p1 = warrior("Gimli", 145, "Dwarf", 3, 15, "-", {"Sword", "Spear", "Rusty sword"}, "-", {"Sauron", "Demon", "Blood elf"});
    archer p2 = archer("Ligolas", 185, "Elf", 2, 21, 3);
    mage p3 = mage("Gandalf", 190, "Human", 2, 6, "Arcane blast", 3);
    warrior p4 = warrior("Golum", 120, "unknown", 2, 61, "-", {"The Ring", "Fists"}, "-", {"Frodo", "Gimli"});
    warrior p5 = warrior("Vlad", 190, "Human", 2, 99, "-", {"Terra Sword", "Copper Sword"}, "-", {"Plantera", "Eye of Cthulu"});
    mage p6 = mage("Anca", 170, "Human", 2, 6, "Charm", 6);
    archer p7 = archer("Ashe", 170, "Human", 2, 31, 5);
    warrior p8 = warrior("Trundle", 250, "Troll", 2, 51, "-", {"Frozen club", "Wooden club"}, "-", {"Lissandra", "Ashe"});
    warrior p9 = warrior("Alex", 170, "Human", 2, 11, "-", {"Diamond sword", "Wooden sword"}, "-", {"Ender Dragon", "Zombie"});
    archer p10 = archer("George", 180, "Gobilin", 2, 2, 1);


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

    vector<shared_ptr<personaj>> v;



    j1.welcome_message(p1);
    j1.welcome_message(p3);
    j2.welcome_message(p6);
    j1.welcome_message(p2);



    cout << m3 << endl << endl;

    cout << a.distanta_din_centru_pana_la_magazin(0, 0, "Constanta") << endl << endl;

    cout << a;

    cout << p4;

    m1.inlocuire(m1.cautare("Lord of the Rings Game"), "Super Mario Bros", 60, {make_shared<warrior>(p1), make_shared<archer>(p2)});

    cout << m1;

}

int main() {

    try {
        f1();
    }
    catch(eroare_personaj &error) {
        cout << error.what() << endl;
    }

    return 0;
}




