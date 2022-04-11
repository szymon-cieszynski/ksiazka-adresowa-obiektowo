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
    string nazwaPlikuZAdresatami;
    int idOstatniegoAdresata = 0;
    //vector <Adresat> adresaci;
    //const string nazwaPlikuZAdresatami; //musimy utworzyc kontruktor zeby mu przypisac nazwe Adresaci.txt!!!!
    //fstream plikTekstowy; przerabiamy na lokalna zmienna
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    bool czyPlikJestPusty(fstream &plikTekstowy);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);


public:
    PlikZAdresatami();
    //PlikZAdresatami(string NAZWAPLIKUZADRESATAMI) : nazwaPlikuZAdresatami(NAZWAPLIKUZADRESATAMI) {}; //nie dziala
    int pobierzOstatnieIdAdresata();
    void dopiszAdresataDoPliku(Adresat adresat);
    vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);

};


#endif
