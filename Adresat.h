#ifndef ADRESAT_H
#define ADRESAT_H
#include <iostream>

using namespace std;

class Adresat
{
    int id;
    int idUzytkownika;
    string imie, nazwisko, numerTelefonu, email, adres;

public:
    void ustawIdAdresata(int noweIdAdresata);
    void ustawIdUzytkownika(int idZalogowanegoUzytkownika);
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

};



#endif
