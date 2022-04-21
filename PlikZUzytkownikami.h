#ifndef PLIKZUZYTKOWNIKAMI_H
#define PLIKZUZYTKOWNIKAMI_H

#include <vector>
#include <fstream>
#include <sstream>
#include <cstdlib>

#include "Uzytkownik.h"
#include "MetodyPomocnicze.h" //zeby dzialala konwersja ktora tam jest zaimpletowana

using namespace std;

class PlikZUzytkownikami
{
    const string NAZWA_PLIKU_Z_UZYTKOWNIKAMI; //musimy utworzyc kontruktor zeby mu przypisac nazwe Uzytkownicy.txt!!!!
    //fstream plikTekstowy; przerabiamy na lokalna zmienna

    bool czyPlikJestPusty(fstream &plikTekstowy);
    string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);
    Uzytkownik pobierzDaneUzytkownika(string daneJednegoUzytkownikaOddzielonePionowymiKreskami);

public:
    PlikZUzytkownikami(string NAZWAPLIKUZUZYTKOWNIKAMI) : NAZWA_PLIKU_Z_UZYTKOWNIKAMI(NAZWAPLIKUZUZYTKOWNIKAMI) {}; //konsturktpor + lista inicjalizacyjna-stala ktora jest nazwa pliku... 38 minuta filmu
    void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik);
    vector <Uzytkownik> wczytajUzytkownikowZPliku();

    void zapiszWszystkichUzytkownikowDoPliku(vector <Uzytkownik> &uzytkownicy);
};

#endif
