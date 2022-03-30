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
    const string nazwaPlikuZUzytkownikami; //musimy utworzyc kontruktor zeby mu przypisac nazwe Uzytkownicy.txt!!!!
    //fstream plikTekstowy; przerabiamy na lokalna zmienna

    bool czyPlikJestPusty(fstream &plikTekstowy);
    string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);
    Uzytkownik pobierzDaneUzytkownika(string daneJednegoUzytkownikaOddzielonePionowymiKreskami);

public:
    PlikZUzytkownikami(string NAZWAPLIKUZUZYTKOWNIKAMI) : nazwaPlikuZUzytkownikami(NAZWAPLIKUZUZYTKOWNIKAMI) {}; //konsturktpor + lista inicjalizacyjna bo robimy stala ktora jest nazwa pliku... 38 minuta filmu
    void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik);
    vector <Uzytkownik> wczytajUzytkownikowZPliku();

    void zapiszWszystkichUzytkownikowDoPliku(Uzytkownik uzytkownik);
};

#endif
