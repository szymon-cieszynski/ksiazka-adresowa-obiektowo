#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H

#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

#include "Adresat.h"
#include "PlikZAdresatami.h"

using namespace std;
class AdresatMenedzer
{
private:
    int idOstatniegoAdresata;

    vector <Adresat> adresaci;
    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika);
    string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);

    PlikZAdresatami plikZAdresatami;

public:
    //AdresatMenedzer(string nazwaPlikuZAdresatami) : plikZAdresatami(nazwaPlikuZAdresatami) {}; nie dziala
    void dodajAdresata(int idZalogowanegoUzytkownika);
    void wyswietlWszystkichAdresatow();
    void wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    //void wyswietlDaneAdresata(int i);

};


#endif
