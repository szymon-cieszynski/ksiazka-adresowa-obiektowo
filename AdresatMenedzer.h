#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H

#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

#include "Adresat.h"
#include "PlikZAdresatami.h"
#include "MetodyPomocnicze.h"

using namespace std;
class AdresatMenedzer
{
private:
    //int idOstatniegoAdresata;
    const int ID_ZALOGOWANEGO_UZYTKOWNIKA;

    vector <Adresat> adresaci;
    void wyswietlDaneAdresata(Adresat adresat);
    Adresat podajDaneNowegoAdresata();
    int podajIdWybranegoAdresata();
    char wybierzOpcjeZMenuEdycja();
    void zaktualizujDaneWybranegoAdresata(Adresat adresat);
    //string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskam(Adresat adresat);
    void wyswietlIloscWyszukanychAdresatow(int iloscAdresatow);

    PlikZAdresatami plikZAdresatami;

public:
    AdresatMenedzer(string nazwaPlikuZAdresatami, int idZalogowanegoUzytkownika) //odbieramy idZalogowanego i przypisujemy do stalej
        : plikZAdresatami(nazwaPlikuZAdresatami), ID_ZALOGOWANEGO_UZYTKOWNIKA(idZalogowanegoUzytkownika)
    {
        adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(ID_ZALOGOWANEGO_UZYTKOWNIKA);
    };
    void dodajAdresata();
    void wyswietlWszystkichAdresatow();
    char wybierzOpcjeZMenuUzytkownika();
    int usunAdresata();
    void edytujAdresata();
    void wyszukajAdresatowPoImieniu();
    void wyszukajAdresatowPoNazwisku();

    //void wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika); //wyzej to tworzymy zamiast tu i w .cpp
    //void wyswietlDaneAdresata(int i);

};


#endif
