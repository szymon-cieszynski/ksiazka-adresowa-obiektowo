#include "AdresatMenedzer.h"
#include <algorithm>

using namespace std;

int AdresatMenedzer::dodajAdresata(int idZalogowanegoUzytkownika)
{
    Adresat adresat;
    //int idOstatniegoAdresata = 0;
    system("cls");

    cout << "Zalogowal sie uzytkownik o ID: "<< idZalogowanegoUzytkownika<<endl;
    system("pause");

    cout << " >>> DODAWANIE NOWEGO ADRESATA <<<" << endl << endl;
    adresat = podajDaneNowegoAdresata(idZalogowanegoUzytkownika, idOstatniegoAdresata);

    adresaci.push_back(adresat);
    plikZAdresatami.dopiszAdresataDoPliku(adresat);

    return ++idOstatniegoAdresata;
}

Adresat AdresatMenedzer::podajDaneNowegoAdresata(int idZalogowanegoUzytkownika, int idOstatniegoAdresata)
{
    Adresat adresat;
    int noweIdAdresata = 0;
    //int idZalogowanegoUzytkownika = 0;

    adresat.ustawIdAdresata(++noweIdAdresata) /*= ++idOstatniegoAdresata*/;
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

void AdresatMenedzer::wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika)
{
    adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(idZalogowanegoUzytkownika);
}

void AdresatMenedzer::wyswietlWszystkichAdresatow()
{

    system("cls");
    if (!adresaci.empty())
    {
        cout << "             >>> ADRESACI <<<" << endl;
        cout << "-----------------------------------------------" << endl;
        //for (vector <Adresat> :: iterator itr = adresaci.begin(); itr != adresaci.end(); itr++)
        for (int i = 0; i < adresaci.size(); i++)
        {
            cout << endl << "Id:                 " << adresaci[i].pobierzIdAdresata() << endl;
            cout << "Imie:               " << adresaci[i].pobierzImie() << endl;
            cout << "Nazwisko:           " << adresaci[i].pobierzNaziwsko() << endl;
            cout << "Numer telefonu:     " << adresaci[i].pobierzNumerTel() << endl;
            cout << "Email:              " << adresaci[i].pobierzEmail() << endl;
            cout << "Adres:              " << adresaci[i].pobierzAdres() << endl;
            //wyswietlDaneAdresata(*itr);
            //wyswietlDaneAdresata(i);
        }
        cout << endl;
    }
    else
    {
        cout << endl << "Ksiazka adresowa jest pusta." << endl << endl;
    }
    system("pause");

}

/*void AdresatMenedzer::wyswietlDaneAdresata(Adresat adresat)
{
    /*cout << endl << "Id:                 " << adresaci[i].pobierzIdAdresata() << endl;
    cout << "Imie:               " << adresaci[i].pobierzImie() << endl;
    cout << "Nazwisko:           " << adresaci[i].pobierzNaziwsko() << endl;
    cout << "Numer telefonu:     " << adresaci[i].pobierzNumerTel() << endl;
    cout << "Email:              " << adresaci[i].pobierzEmail() << endl;
    cout << "Adres:              " << adresaci[i].pobierzAdres() << endl;*/
    /*cout << endl << "Id:                 " << adresaci[itr].pobierzIdAdresata() << endl;
    cout << "Imie:               " << adresaci[itr].pobierzImie() << endl;
    cout << "Nazwisko:           " << adresaci[itr].pobierzNaziwsko() << endl;
    cout << "Numer telefonu:     " << adresaci[itr].pobierzNumerTel() << endl;
    cout << "Email:              " << adresaci[itr].pobierzEmail() << endl;
    cout << "Adres:              " << adresaci[itr].pobierzAdres() << endl;
    cout << endl << "Id:                 " << adresat.id << endl;
    cout << "Imie:               " << adresat.imie << endl;
    cout << "Nazwisko:           " << adresat.nazwisko << endl;
    cout << "Numer telefonu:     " << adresat.numerTelefonu << endl;
    cout << "Email:              " << adresat.email << endl;
    cout << "Adres:              " << adresat.adres << endl;
}*/
