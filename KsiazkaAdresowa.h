#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>

#include "AdresatMenedzer.h"
#include "UzytkownikMenedzer.h"

using namespace std;

class KsiazkaAdresowa
{
private:
    UzytkownikMenedzer uzytkownikMenedzer;
    AdresatMenedzer adresatMenedzer;

public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami) : uzytkownikMenedzer(nazwaPlikuZUzytkownikami)
    {
        uzytkownikMenedzer.wczytajUzytkownikowZPliku();
        adresatMenedzer.wczytajAdresatowZalogowanegoUzytkownikaZPliku();
    };      //lista inicjalizacyjna

    /*KsiazkaAdresowa(string nazwaPlikuZAdresatami) : adresatMenedzer(nazwaPlikuZAdresatami)
    {
        adresatMenedzer.wczytajAdresatowZalogowanegoUzytkownikaZPliku();
    }; nie dziala niestety        */

    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    int logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wylogujUzytkownika();
    int dodajAdresata();
    void wyswietlWszystkichAdresatow();

};

#endif
