#include <iostream>
#include <vector>
#include <windows.h>
#include "KsiazkaAdresowa.h"

using namespace std;

/*KsiazkaAdresowa::pobierzIdZalogowanegoUzytkownika()
{
    idZalogowanegoUzytkownika = uzytkownikMenedzer.logowanieUzytkownika();
    return idZalogowanegoUzytkownika;
    //return uzytkownikMenedzer.logowanieUzytkownika();
}*/

void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    uzytkownikMenedzer.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{
    uzytkownikMenedzer.wypiszWszystkichUzytkownikow();
}

int KsiazkaAdresowa::logowanieUzytkownika()
{
    idZalogowanegoUzytkownika = uzytkownikMenedzer.logowanieUzytkownika();
    if (idZalogowanegoUzytkownika != 0)
    {
        adresatMenedzer.wczytajAdresatowZalogowanegoUzytkownikaZPliku(idZalogowanegoUzytkownika);
    }
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::wylogujUzytkownika()
{
    uzytkownikMenedzer.wylogujUzytkownika();
}

int KsiazkaAdresowa::dodajAdresata()
{

    adresatMenedzer.dodajAdresata(idZalogowanegoUzytkownika);
}

void KsiazkaAdresowa::wyswietlWszystkichAdresatow()
{
    adresatMenedzer.wyswietlWszystkichAdresatow();
}





