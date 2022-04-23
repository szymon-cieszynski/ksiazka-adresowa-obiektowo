#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "ksiazka.txt");
    //KsiazkaAdresowa KsiazkaAdresowa;

    //PlikZAdresatami plikZAdresatami("ksiazka.txt");
    // plikZAdresatami.dopisz("tekst do dopisania");

   // PlikZUzytkownikami plikZUzytkownikami("Uzytkownicy.txt");

    while (true)
    {
        if (!ksiazkaAdresowa.czyUzytkownikJestZalogowany())
        {
            char wybor = ksiazkaAdresowa.wybierzOpcjeZMenuGlownego();

            switch (wybor)
            {
            case '1':
                ksiazkaAdresowa.rejestracjaUzytkownika();
                break;
            case '2':
                ksiazkaAdresowa.logowanieUzytkownika();
                break;
            case '9':
                exit(0);
                break;
            default:
                cout << endl << "Nie ma takiej opcji w menu." << endl << endl;
                system("pause");
                break;
            }
        }
        else
        {
            char wybor = ksiazkaAdresowa.wybierzOpcjeZMenuUzytkownika();

            switch (wybor)
            {
            case '1':
                ksiazkaAdresowa.dodajAdresata();
                break;
            case '2':
                ksiazkaAdresowa.wyszukajAdresatowPoImieniu();
                break;
            case '3':
                ksiazkaAdresowa.wyszukajAdresatowPoNazwisku();
                break;
            case '4':
                ksiazkaAdresowa.wyswietlWszystkichAdresatow();
                break;
            case '5':
                ksiazkaAdresowa.usunAdresata();
                break;
            case '6':
                //edytujAdresata(adresaci);
                ksiazkaAdresowa.edytujAdresata();
                break;
            case '7':
                ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
                break;
            case '8':
                /*idZalogowanegoUzytkownika = 0;
                adresaci.clear();*/
                ksiazkaAdresowa.wylogujUzytkownika();
                break;
            }
        }
    }


    /*ksiazkaAdresowa.dodajAdresata();
    ksiazkaAdresowa.dodajAdresata();
    ksiazkaAdresowa.dodajAdresata();

    //ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();

    ksiazkaAdresowa.wyswietlWszystkichAdresatow();
    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();*/


    //ksiazkaAdresowa.wylogujUzytkownika();

    return 0;
}

//testy tylko dla metod publicznych w poszczegolnych klasach!!!
//TESTY AdresatMenedzer
#include "AdresatMenedzer.h"

/*int testAdresatMenedzer_main()
{
    AdresatMenedzer adresatMenedzer("ksiazka.txt", 1);
    adresatMenedzer.wyswietlWszystkichAdresatow();
    adresatMenedzer.dodajAdresata();
    adresatMenedzer.wyswietlWszystkichAdresatow();
}*/

//TESTY PlikZAdresatami
#include "Adresat.h"
#include "PlikZAdresatami.h"

/*int testPlikZAdresatami_main()
{
    PlikZAdresatami plikZAdresatami("Adresaci-test.txt");
    Adresat adresat(666,666,"Romuald","Dzikowski","0700 666 555","romek#wp.pl","Spychalskiego 5b");

    plikZAdresatami.dopiszAdresataDoPliku(adresat);

    cout << plikZAdresatami.pobierzOstatnieIdAdresata();
}*/
