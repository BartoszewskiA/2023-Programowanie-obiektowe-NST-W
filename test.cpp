#include <iostream>
#include <ctime>
#include <cmath>
#include <sstream>

using namespace std;

const int ZYCIE = 100;
const int PUNKTY = 30;

struct cios
{
    int atak_fizyczny = 0;
    int atak_magiczny = 0;
    bool podstepny_atak;
};

class postac
{
private:
    string imie;
    int zycie;
    int atak_fizyczny;
    int atak_magiczny;
    int obrona_fizyczna;
    int obrona_magiczna;

public:
    postac(string im) : imie(im)
    {
        zycie = ZYCIE;
        int atak = round(PUNKTY * (rand() % 101 / 100.0));
        int obrona = PUNKTY - atak;
        atak_fizyczny = round(atak * (rand() % 101 / 100.0));
        atak_magiczny = atak - atak_fizyczny;
        obrona_fizyczna = round(obrona * (rand() % 101 / 100.0));
        obrona_magiczna = obrona - obrona_fizyczna;
    }

    string przedstaw_sie()
    {
        stringstream w;
        w << "Imie: " << imie
          << " Zycie: " << zycie << endl
          << "Atak fizyczny: " << atak_fizyczny
          << " Atak magiczny: " << atak_magiczny << endl
          << "Obrona fizyczna: " << obrona_fizyczna
          << " Obrona magiczna: " << obrona_magiczna << endl;
        return w.str();
    }

    bool czy_zyje()
    {
        if (zycie > 0)
            return true;
        else
            return false;
    }

    cios zadaj_cios()
    {
        cios c;
        c.atak_fizyczny = round(atak_fizyczny * ((rand() % 81 + 20) / 100.0));
        c.atak_magiczny = round(atak_magiczny * ((rand() % 81 + 20) / 100.0));
        if (rand() % 5 == 0)
            c.podstepny_atak = true;
        else
            c.podstepny_atak = false;

        return c;
    }

    bool przyjmij_cios(cios c) // true - zycje, false - nie zyje
    {
        int obrazenia_fizyczne;
        int obrazenia_magiczne;
        if (c.podstepny_atak)
        {
            obrazenia_fizyczne = c.atak_fizyczny;
            obrazenia_magiczne = c.atak_magiczny;
        }
        else
        {
            obrazenia_fizyczne = c.atak_fizyczny - round(obrona_fizyczna * (rand() % 101 / 100.0));
            obrazenia_magiczne = c.atak_magiczny - round(obrona_magiczna * (rand() % 101 / 100.0));
        }
        if (obrazenia_fizyczne < 0)
            obrazenia_fizyczne = 0;
        if (obrazenia_magiczne < 0)
            obrazenia_magiczne = 0;
        zycie = zycie - (obrazenia_fizyczne + obrazenia_magiczne);

        if (zycie > 0)
            return true;
        else
            return false;
    }
};

void ring(postac zawodnik_1, postac zawodnik_2)
{
    cios c;
    int max_liczba_rund = 100;

    cout << zawodnik_1.przedstaw_sie();
    cout << zawodnik_2.przedstaw_sie();

    while (zawodnik_1.czy_zyje() && zawodnik_2.czy_zyje() && --max_liczba_rund > 0)
    {
        c = zawodnik_1.zadaj_cios();
        cout << endl
             << c.atak_fizyczny << " " << c.atak_magiczny;
        zawodnik_2.przyjmij_cios(c);
        c = zawodnik_2.zadaj_cios();
        cout << endl
             << c.atak_fizyczny << " " << c.atak_magiczny;
        zawodnik_1.przyjmij_cios(c);
    }

    cout << zawodnik_1.przedstaw_sie();
    cout << zawodnik_2.przedstaw_sie();
}

int main()
{
    srand(time(NULL));
    postac p1("Conan"), p2("Rambo");
    ring(p1, p2);
    return 0;
}