#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt");
    KsiazkaAdresowa ksiazkaAdresowa("ksiazka.txt");

    ksiazkaAdresowa.logowanieUzytkownika();

    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();



    ksiazkaAdresowa.rejestracjaUzytkownika();
    ksiazkaAdresowa.rejestracjaUzytkownika();
    ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();

    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();

    ksiazkaAdresowa.wylogujUzytkownika();

    ksiazkaAdresowa.dodajAdresata();

    return 0;
}
