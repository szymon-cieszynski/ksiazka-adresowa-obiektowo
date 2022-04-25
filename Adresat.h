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
    Adresat(int id = 0, int idUzytkownika = 0, string imie = "", string nazwisko = "", string numerTelefonu = "", string email = "", string adres = "")
    {
        this -> id = id;
        this -> idUzytkownika = idUzytkownika;
        this -> imie = imie;
        this -> nazwisko = nazwisko;
        this -> numerTelefonu = numerTelefonu;
        this -> email = email;
        this -> adres = adres;
    }
    void ustawIdAdresata(int noweIdAdresata);
    void ustawIdUzytkownika(int noweIdZalogowanegoUzytkownika);
    void ustawImie(string noweImie);
    void ustawNazwisko(string noweNazwisko);
    void ustawNumerTel(string nowyNumer);
    void ustawEmail(string nowyEmail);
    void ustawAdres(string nowyAdres);

    int pobierzIdAdresata();
    int pobierzIdUzytkownika();
    string pobierzImie();
    string pobierzNazwisko();
    string pobierzNumerTel();
    string pobierzEmail();
    string pobierzAdres();

};



#endif

