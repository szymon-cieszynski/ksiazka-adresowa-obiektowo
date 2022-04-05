#ifndef ADRESAT_H
#define ADRESAT_H
#include <iostream>

#include "UzytkownikMenedzer.h"

using namespace std;

class Adresat
{
    int id;
    int idUzytkownika;
    string imie, nazwisko, numerTelefonu, email, adres;

public:
    /*Adresat(int id)
    {
        uzytkownikMenedzer.idZalogowanegoUzytkownika = id;
    }*/
    //UzytkownikMenedzer uzytkownikMenedzer;
    void ustawIdAdresata(int noweIdAdresata);
    void ustawIdUzytkownika(UzytkownikMenedzer & idZalogowanegoUzytkownika);
    void wprowadzImie(string noweImie);
    void wprowadzNazwisko(string noweNazwisko);
    void wprowadzNumerTel(string nowyNumer);
    void wprowadzEmail(string nowyEmail);
    void wprowadzAdres(string nowyAdres);

    int pobierzIdAdresata();
    int pobierzIdUzytkownika();
    string pobierzImie();
    string pobierzNaziwsko();
    string pobierzNumerTel();
    string pobierzEmail();
    string pobierzAdres();

    friend class AdresatMenedzer;

};



#endif
