#include "Uzytkownik.h"

using namespace std;

//ustawiamy je tutaj (specjalne metody do ustawiania tych zmiennych) zeby program sie kompilowal a nie wypluwal ze atrybuty klasy Uzytkownik sa prywatne
void Uzytkownik::ustawId(int noweId)
{
    if (noweId >= 0)
        id = noweId;
}
void Uzytkownik::ustawLogin(string nowyLogin)
{
    login = nowyLogin;
}
void Uzytkownik::ustawHaslo(string noweHaslo)
{
    haslo = noweHaslo;
}

int Uzytkownik::pobierzId()
{
    return id;
}
string Uzytkownik::pobierzLogin()
{
    return login;
}
string Uzytkownik::pobierzHaslo()
{
    return haslo;
}
