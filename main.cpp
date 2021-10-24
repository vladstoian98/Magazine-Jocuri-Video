#include <iostream>
#include <vector>

using namespace std;

class personaje {
    string nume;
    int inaltime; // In centimetri.
    string rasa;
public:
    personaje(const string &nume, int inaltime, const string &rasa){
        this->nume = nume;
        this->inaltime = inaltime;
        this->rasa = rasa;
    }

    personaje& operator =(const personaje& copie)
    {
        this->nume = copie.nume;
        this->inaltime = copie.inaltime;
        this->rasa = copie.rasa;
    }

    personaje(const personaje& copie)
    {
        this->nume = copie.nume;
        this->inaltime = copie.inaltime;
        this->rasa = copie.rasa;
    }

    friend ostream &operator<<(ostream &os, const personaje &personaje) {
        os << personaje.nume << " " << personaje.inaltime << " " << personaje.rasa << endl;
        return os;
    }
};

class jocuri {
    string nume;
    int pret;
    vector<personaje> personaj;
public:
    jocuri();
    void adauga(personaje p)
    {
        personaj.push_back(p);
    }

    jocuri(const string &nume, int pret) : nume(nume), pret(pret) {}

    jocuri(const vector<personaje> &personaj, const string &nume, int pret) : personaj(personaj), nume(nume), pret(pret) {}

    friend ostream &operator<<(ostream &os, const jocuri &jocuri) {
        os << jocuri.nume << " " << jocuri.pret << " " << endl << endl;
        for(const auto & p : jocuri.personaj)
            os << p ;
        os << endl;
        return os;
    }
};

class magazine {
    string nume;
    string judet;
    string oras;
    vector<jocuri> joc;
public:
    void adauga(jocuri j)
    {
        joc.push_back(j);
    }

    magazine(const string &nume, const string &judet, const string &oras) : nume(nume), judet(judet), oras(oras) {}

    magazine(const vector<jocuri> &joc, const string &nume, const string &judet, const string &oras) : joc(joc), nume(nume), judet(judet), oras(oras) {}

    friend ostream &operator<<(ostream &os, const magazine &magazine) {
        os << magazine.nume << " " << magazine.judet << " " << magazine.oras << " "<< endl << endl;
        for(const auto & j : magazine.joc)
            os << j ;
        os << endl;
        return os;
    }
};

int main() {
    personaje p1 = personaje("Gimli", 145, "Dwarf");
    personaje p2 = personaje("Ligolas", 185, "Elf");
    personaje p3 = personaje("Gandalf", 190, "Human");
    personaje p4 = personaje("Golum", 120, "unknown");
    personaje p5 = personaje("Vlad", 190, "Human");
    personaje p6 = personaje("Anca", 170, "Human");
    personaje p7 = personaje("Ashe", 170, "Human");
    personaje p8 = personaje("Trundle", 250, "Troll");
    personaje p9 = personaje("Alex", 170, "Human");
    personaje p10 = personaje("George", 180, "Gobilin");

    jocuri j1 = jocuri("Lord of the Rings Game", 60);
    j1.adauga(p1); j1.adauga(p2); j1.adauga(p3); j1.adauga(p4);

    jocuri j2 = jocuri("World of Warcraft", 15);
    j2.adauga(p5); j2.adauga(p6);

    jocuri j3 = jocuri("League of Legends", 0);
    j3.adauga(p7); j3.adauga(p8);

    jocuri j4 = jocuri("Terraria", 15);
    j4.adauga(p9); j4.adauga(p10);

    magazine m1 = magazine("Gamex", "Constanta", "Constanta");
    m1.adauga(j1); m1.adauga(j2); m1.adauga(j3);

    magazine m2 = magazine("ING", "Sector 3", "Bucuresti");
    m2.adauga(j2); m2.adauga(j3);

    magazine m3 = magazine("Game Company", "Tulcea", "Tulcea");
    m3.adauga(j1); m3.adauga(j3);

    cout << m3;

    return 0;
}
