#include "AdresatMenedzer.h"
#include <algorithm>

using namespace std;

int AdresatMenedzer::dodajAdresata()
{
    Adresat adresat;

    system("cls");
    cout << " >>> DODAWANIE NOWEGO ADRESATA <<<" << endl << endl;
    adresat = podajDaneNowegoAdresata(/*idZalogowanegoUzytkownika, idOstatniegoAdresata*/);

    adresaci.push_back(adresat);
    plikZAdresatami.dopiszAdresataDoPliku(adresat);

    return ++idOstatniegoAdresata;
}

Adresat AdresatMenedzer::podajDaneNowegoAdresata(/*int idZalogowanegoUzytkownika, int idOstatniegoAdresata*/)
{
    Adresat adresat;
    int noweIdAdresata = 0;
    int idZalogowanegoUzytkownika = 0;

    adresat.ustawIdAdresata(noweIdAdresata) /*= ++idOstatniegoAdresata*/;
    adresat.ustawIdUzytkownika(idZalogowanegoUzytkownika)/* = idZalogowanegoUzytkownika*/;

    cout << "Podaj imie: ";
    //adresat.imie = wczytajLinie();
    string imie;
    cin >> imie;
    zamienPierwszaLitereNaDuzaAPozostaleNaMale(imie);
    adresat.wprowadzImie(imie);

    //adresat.imie = zamienPierwszaLitereNaDuzaAPozostaleNaMale(adresat.imie);

    cout << "Podaj nazwisko: ";
    //adresat.nazwisko = wczytajLinie();
    string nazwisko;
    cin >> nazwisko;
    zamienPierwszaLitereNaDuzaAPozostaleNaMale(nazwisko);
    adresat.wprowadzNazwisko(nazwisko);


    cout << "Podaj numer telefonu: ";
    //adresat.numerTelefonu = wczytajLinie();
    string numerTelefonu;
    cin >> numerTelefonu;
    adresat.wprowadzNumerTel(numerTelefonu);

    cout << "Podaj email: ";
    //adresat.email = wczytajLinie();
    string email;
    cin >> email;
    adresat.wprowadzEmail(email);

    cout << "Podaj adres: ";
    //adresat.adres = wczytajLinie();
    string adres;
    cin >> adres;
    adresat.wprowadzAdres(adres);

    return adresat;
}

string AdresatMenedzer::zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst)
{
    if (!tekst.empty())
    {
        transform(tekst.begin(), tekst.end(), tekst.begin(), ::tolower);
        tekst[0] = toupper(tekst[0]);
    }
    return tekst;
}

void AdresatMenedzer::wczytajAdresatowZalogowanegoUzytkownikaZPliku()
{
    adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku();
}


