#include <iostream>
#include <ctime>
#include <string>

using namespace std;

class osoba
{
private:
    string imie;
    string nazwisko;
    int rok_urodzenia;

public:
    void setImie(string im)
    {
        imie = im;
    }
    void setNazwisko(string nazw)
    {
        nazwisko = nazw;
    }
    void setWiek(int wiek);
    string getImie()
    {
        return imie;
    }
    string getNazwisko()
    {
        return nazwisko;
    }
    int getWiek();

    void wizytowka();
};

void osoba::setWiek(int wiek)
{
    time_t czas_sys = time(NULL);
    tm *czas = localtime(&czas_sys);
    rok_urodzenia = (1900 + czas->tm_year) - wiek;
}

int osoba::getWiek()
{
    time_t czas_sys = time(NULL);
    tm *czas = localtime(&czas_sys);
    return (1900 + czas->tm_year) - rok_urodzenia;
}

void osoba::wizytowka()
{
    cout << endl
         << "--------------------------------" << endl
         << "Imie:\t\t" << imie << endl
         << "Nazwisko:\t" << nazwisko << endl
         << "Rok urodzenie\t" << rok_urodzenia << endl
         << "Wiek: \t\t" << getWiek() << endl
         << "--------------------------------" << endl;
}

int main()
{
    osoba ktos;
    string s;
    cout << "Imie: ";
    getline(cin, s);
    ktos.setImie(s);
    cout << "Nazwisko: ";
    getline(cin, s);
    ktos.setNazwisko(s);
    cout << "Wiek: ";
    getline(cin, s);
    ktos.setWiek(atoi(s.c_str()));

    ktos.wizytowka();
    return 0;
}