#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H


#include <vector>
#include <fstream>
#include <sstream>
#include <cstdlib>

#include "Adresat.h"
#include "MetodyPomocnicze.h"

using namespace std;

class PlikZAdresatami
{
    //string nazwaPlikuZAdresatami;
    int idOstatniegoAdresata;

    const string NAZWA_PLIKU_Z_ADRESATAMI; //musimy utworzyc kontruktor zeby mu przypisac nazwe ksiazka.txt!!!!
    string NAZWA_TMP_PLIKU_Z_ADRESATAMI;

    bool czyPlikJestPusty(fstream &plikTekstowy);

    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    void usunPlik(string nazwaPlikuZRozszerzeniem);
    void zmienNazwePliku(string staraNazwa, string nowaNazwa);



public:
    //PlikZAdresatami();
    //PlikZAdresatami(string nazwaPliku) : PlikTekstowy(nazwaPliku) {};
    PlikZAdresatami(string nazwaPlikuZAdresatami) : NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami)
    {
        idOstatniegoAdresata = 0;
        NAZWA_TMP_PLIKU_Z_ADRESATAMI = "ksiazka_tmp.txt";
    };
    int pobierzOstatnieIdAdresata();
    bool dopiszAdresataDoPliku(Adresat adresat);
    vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    void usunWybranegoAdresataZPliku(int idUsuwanegoAdresata);
    void edytujWybranegoAdresataWPliku(Adresat adresat, string liniaZDanymiAdresata);
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    //void dopisz(string tekst);

};


#endif
