#include <iostream>
#include <vector>
#include <cstring>
#include <cmath>

using namespace std;

class personaj {
    string nume;
    int inaltime; // In centimetri.
    string rasa;
public:
    personaj(const string &nume, int inaltime, const string &rasa){
        this->nume = nume;
        this->inaltime = inaltime;
        this->rasa = rasa;
    }

    personaj& operator =(const personaj& copie)
    {
        this->nume = copie.nume;
        this->inaltime = copie.inaltime;
        this->rasa = copie.rasa;
    }

    personaj(const personaj& copie)
    {
        this->nume = copie.nume;
        this->inaltime = copie.inaltime;
        this->rasa = copie.rasa;
    }

    friend ostream &operator<<(ostream &os, const personaj &personaje) {
        os << personaje.nume << " " << personaje.inaltime << " " << personaje.rasa << endl;
        return os;
    }
};

class joc {
    string nume;
    int pret;
    vector<personaj> personaje;
public:
    joc();
    void adauga(personaj p)
    {
        personaje.push_back(p);
    }

    joc(const string &nume, int pret) : nume(nume), pret(pret) {}

    int getPret() const {
        return pret;
    }

    friend ostream &operator<<(ostream &os, const joc &jocuri) {
        os << jocuri.nume << " " << jocuri.pret << " " << endl << endl;
        for(const auto & p : jocuri.personaje)
            os << p ;
        os << endl;
        return os;
    }

};

class magazin {
    string nume;
    string judet;
    string oras;
    int copii_jocuri;
    int coordonata_x;
    int coordonata_y;
    vector<joc> jocuri;
public:
    void adauga(joc j)
    {
        jocuri.push_back(j);
    }

    magazin(const string &nume, const string &judet, const string &oras, int copii_jocuri, int coordonata_x, int coordonata_y) : nume(nume), judet(judet), oras(oras), copii_jocuri(copii_jocuri),
                                                                                             coordonata_x(coordonata_x), coordonata_y(coordonata_y){}

    const string &getOras() const {
        return oras;
    }

    int getCoordonataX() const {
        return coordonata_x;
    }

    int getCoordonataY() const {
        return coordonata_y;
    }

    friend ostream &operator<<(ostream &os, const magazin &magazine) {
        os << magazine.nume << " " << magazine.judet << " " << magazine.oras << " "<< endl << endl;
        for(const auto & j : magazine.jocuri)
            os << j ;
        os << endl;
        return os;
    }

    void pret_total(const magazin &magazine)
    {
        int s = 0;
        for(const auto & j : magazine.jocuri)
        {
            s = s + j.getPret() * magazine.copii_jocuri;
        }
        cout << s << endl << endl;
    }

};

class aplicatie {
    string nume;
    vector<magazin> magazine;
public:
    void adauga(magazin m)
    {
        magazine.push_back(m);
    }

    aplicatie(const string &nume) : nume(nume) {}

    friend ostream &operator<<(ostream &os, const aplicatie &aplicatie) {
        os << aplicatie.nume << endl << endl;
        for(const auto & m : aplicatie.magazine)
            os << m;
        os << endl;
        return os;
    }

    void distanta_din_centru_pana_la_magazin(const aplicatie &aplicatie)
    {
        float distanta;
        for(const auto & m : aplicatie.magazine)
        {
            if(m.getOras() == "Constanta")
            {
                distanta =  sqrt(pow(m.getCoordonataX(), 2) + pow(m.getCoordonataY(), 2));
                cout << distanta << endl;
            }
        }
        cout << endl;
    }


};

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

    m1.pret_total(m1);

    a.distanta_din_centru_pana_la_magazin(a);

    cout << a;

    return 0;
}
