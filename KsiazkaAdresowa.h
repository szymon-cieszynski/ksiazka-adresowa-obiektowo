#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>

#include "AdresatMenedzer.h"
#include "UzytkownikMenedzer.h"

using namespace std;

class KsiazkaAdresowa
{
private:
    int idZalogowanegoUzytkownika;

    UzytkownikMenedzer uzytkownikMenedzer;
    AdresatMenedzer adresatMenedzer;

public:
    int pobierzIdZalogowanegoUzytkownika();
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami) : uzytkownikMenedzer(nazwaPlikuZUzytkownikami)
    {
        uzytkownikMenedzer.wczytajUzytkownikowZPliku();
    };      //lista inicjalizacyjna

    void wczytajAdresatow();
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    int logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wylogujUzytkownika();
    int dodajAdresata(/*int idZalogowanegoUzytkownika*/);
    void wyswietlWszystkichAdresatow();

};

#endif
