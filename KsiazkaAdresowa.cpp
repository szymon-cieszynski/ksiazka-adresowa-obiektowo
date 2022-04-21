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
    //idZalogowanegoUzytkownika = uzytkownikMenedzer.logowanieUzytkownika();
    uzytkownikMenedzer.logowanieUzytkownika();
    if (uzytkownikMenedzer.czyUzytkownikJestZalogowany())
    {
        adresatMenedzer = new AdresatMenedzer(NAZWA_PLIKU_Z_ADRESATAMI, uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika()); //dopiero tu tworzymy obiekt klasy AdresatMenedzer i wysylamu mu nazwe i idZalogowanego
        //adresatMenedzer.wczytajAdresatowZalogowanegoUzytkownikaZPliku(idZalogowanegoUzytkownika);
    }
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::wylogujUzytkownika()
{
    uzytkownikMenedzer.wylogujUzytkownika();
    delete adresatMenedzer;
    adresatMenedzer = NULL;
}

int KsiazkaAdresowa::dodajAdresata()
{
    if (uzytkownikMenedzer.czyUzytkownikJestZalogowany())
    {
        adresatMenedzer->dodajAdresata(); //pracujemy na wskazniku wiec uzywamy strzalki
    }
    else
    {
        cout << "Aby dodac adresata, najpierw sie zaloguj" << endl;
        system("pause");
    }
}

void KsiazkaAdresowa::wyswietlWszystkichAdresatow()
{
    if (uzytkownikMenedzer.czyUzytkownikJestZalogowany())
    {
        adresatMenedzer->wyswietlWszystkichAdresatow(); //pracujemy na wskazniku wiec uzywamy strzalki
    }
    else
    {
        cout << "Aby wyswietlic swoje kontakty, najpierw sie zaloguj" << endl;
        system("pause");
    }
}

bool KsiazkaAdresowa::czyUzytkownikJestZalogowany()
{
    uzytkownikMenedzer.czyUzytkownikJestZalogowany();
}

char KsiazkaAdresowa::wybierzOpcjeZMenuGlownego()
{
    uzytkownikMenedzer.wybierzOpcjeZMenuGlownego();
}

char KsiazkaAdresowa::wybierzOpcjeZMenuUzytkownika()
{
    adresatMenedzer->wybierzOpcjeZMenuUzytkownika();
}

int KsiazkaAdresowa::usunAdresata()
{
    adresatMenedzer->usunAdresata();
}

void KsiazkaAdresowa::edytujAdresata()
{
    adresatMenedzer->edytujAdresata();
}

void KsiazkaAdresowa::wyszukajAdresatowPoImieniu()
{
    adresatMenedzer->wyszukajAdresatowPoImieniu();
}

void KsiazkaAdresowa::wyszukajAdresatowPoNazwisku()
{
    adresatMenedzer->wyszukajAdresatowPoNazwisku();
}

/*void KsiazkaAdresowa::dopisz()
{
    PlikZAdresatami.dopisz();
}*/
