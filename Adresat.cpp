#include "Adresat.h"

using namespace std;

void Adresat::ustawIdAdresata(int noweIdAdresata)
{
    if (noweIdAdresata >= 0)
        id = noweIdAdresata;
}

void Adresat::ustawIdUzytkownika(UzytkownikMenedzer & idZalogowanegoUzytkownika)
{
    idUzytkownika = idZalogowanegoUzytkownika;
}

void Adresat::wprowadzImie(string noweImie)
{
    imie = noweImie;
}

void Adresat::wprowadzNazwisko(string noweNazwisko)
{
    nazwisko = noweNazwisko;
}

void Adresat::wprowadzNumerTel(string nowyNumer)
{
    numerTelefonu = nowyNumer;
}

void Adresat::wprowadzEmail(string nowyEmail)
{
    email = nowyEmail;
}

void Adresat::wprowadzAdres(string nowyAdres)
{
    adres = nowyAdres;
}

int Adresat::pobierzIdAdresata()
{
    return id;
}

int Adresat::pobierzIdUzytkownika()
{
    return idUzytkownika;
}

string Adresat::pobierzImie()
{
    return imie;
}

string Adresat::pobierzNaziwsko()
{
    return nazwisko;
}

string Adresat::pobierzNumerTel()
{
    return numerTelefonu;
}

string Adresat::pobierzEmail()
{
    return email;
}

string Adresat::pobierzAdres()
{
    return adres;
}
