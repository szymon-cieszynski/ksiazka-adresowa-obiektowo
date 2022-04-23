#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>

#include "AdresatMenedzer.h"
#include "UzytkownikMenedzer.h"
#include "PlikTekstowy.h"

using namespace std;

class KsiazkaAdresowa
{
private:
    int idZalogowanegoUzytkownika = 0;

    UzytkownikMenedzer uzytkownikMenedzer;

    AdresatMenedzer *adresatMenedzer; //na wskaznikach bedzie optymalniej
    const string NAZWA_PLIKU_Z_ADRESATAMI;

public:
    int pobierzIdZalogowanegoUzytkownika();
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami) : uzytkownikMenedzer(nazwaPlikuZUzytkownikami), NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami)
    {
        adresatMenedzer = NULL; //ustawiamy na null ZEBY NIE WSkazywal na jakies miejsce w pamieci i przy delete bysmy mogli usunac wazna informacje
    };      //lista inicjalizacyjna
    ~KsiazkaAdresowa() //destruktor
    {
        delete adresatMenedzer;
        adresatMenedzer = NULL;
    }

    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    int logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wylogujUzytkownika();
    int dodajAdresata();
    void wyswietlWszystkichAdresatow();
    bool czyUzytkownikJestZalogowany();
    char wybierzOpcjeZMenuGlownego();
    char wybierzOpcjeZMenuUzytkownika();
    int usunAdresata();
    void edytujAdresata();
    void wyszukajAdresatowPoImieniu();
    void wyszukajAdresatowPoNazwisku();
    //void dopisz();

};

#endif
