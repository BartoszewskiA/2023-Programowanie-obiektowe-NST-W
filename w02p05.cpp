#include <iostream>

using namespace std;

string wydzial = "IT";

class osoba
{
private:
    string imie;
    string nazwisko;
    string wydzial;

public:
    osoba(string imie, string nazwisko)
    {
        this->imie = imie;
        this->nazwisko = nazwisko;
        this->wydzial = ::wydzial;  //:: wychodzi poza klase
    }
    void setImie(string imie)
    {
        this->imie = imie;
    }
    void setNazwisko(string nazwisko)
    {
        this->nazwisko = nazwisko;
    }
    string getImie()
    {
        return this->imie; // this->  nie jest konieczne
    }
    string getNazwisko()
    {
        return nazwisko;
    }
    string getWydzial()
    {
        return wydzial;
    }
};

int main()
{
    osoba ktos("Jan", "Kowalski");
    return 0;
}