#ifndef PLIKTEKSTOWY_H
#define PLIKTEKSTOWY_H

#include <iostream>
#include <iostream>
#include <fstream>

#include "KsiazkaAdresowa.h"


using namespace std;


/*class PlikTekstowy {

    const string NAZWA_PLIKU;

public:

    PlikTekstowy(string nazwaPliku) : NAZWA_PLIKU(nazwaPliku) {
    }

    string pobierzNazwePliku()
    {
        return NAZWA_PLIKU;
    }

    bool czyPlikJestPusty()
    {
        bool pusty = true;
        fstream plikTekstowy;
        plikTekstowy.open(pobierzNazwePliku().c_str(), ios::app);

        if (plikTekstowy.good() == true)
        {
            plikTekstowy.seekg(0, ios::end);
            if (plikTekstowy.tellg() != 0)
                pusty = false;
        }

        plikTekstowy.close();
        return pusty;
    }
};

class PlikZAdresatami : public PlikTekstowy
{

public:

    PlikZAdresatami(string nazwaPliku) : PlikTekstowy(nazwaPliku) {};

    void dopisz(string tekst)
    {
        fstream plikTekstowy;
        plikTekstowy.open(pobierzNazwePliku().c_str(), ios::app);

        if (plikTekstowy.good() == true)
        {
            if (czyPlikJestPusty())
                plikTekstowy << "To jest poczatek pliku" << endl;

             plikTekstowy << tekst << endl;
        }

        plikTekstowy.close();
    }
};


int main()
{
    PlikZAdresatami plikZAdresatami("ksiazka.txt");

    plikZAdresatami.dopisz("tekst do dopisania");

    return 0;
}*/




#endif
