#ifndef UZYTKOWNIKMENEGER_H
#define UZYTKOWNIKMENEGER_H


#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

#include "Uzytkownik.h"
#include "PlikZUzytkownikami.h" //zeby dodawanie do pliku dzialalo

using namespace std;

class UzytkownikMenedzer
{
private:
    int idZalogowanegoUzytkownika; //usuwamy rownanie do zera
    vector <Uzytkownik> uzytkownicy; //wektor grobalnie wiec w .cpp sobie go uzywa

    Uzytkownik podajDaneNowegoUzytkownika();
    int pobierzIdNowegoUzytkownika();
    bool czyIstniejeLogin(string login);

    PlikZUzytkownikami plikZUzytkownikami; //tworzymy obiekt i do niego dopisujemy przesylajac mu obiekt uzytkownik (w .cpp)


public:
    friend class Adresat;
    UzytkownikMenedzer(string nazwaPlikuZUzytkownikami) : plikZUzytkownikami(nazwaPlikuZUzytkownikami) {};
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void wczytajUzytkownikowZPliku();
    int logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wylogujUzytkownika();
};

#endif
