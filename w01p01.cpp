#include <iostream>

using namespace std;

class osoba
{
private:
    string imie;
    string nazwisko;

public:
    void setImie(string im)
    {
        imie = im;
    }
    void setNazwisko(string nazw)
    {
        nazwisko = nazw;
    }
    string getImie()
    {
        return imie;
    }
    string getNazwisko()
    {
        return nazwisko;
    }
    void wizytowka();
};

void osoba::wizytowka()
{
    cout << endl
         << "--------------------------------" << endl
         << "Imie:\t\t" << imie << endl
         << "Nazwisko:\t" << nazwisko
         << "--------------------------------" << endl;
}

int main()
{
    osoba ktos, ktos1, ktos2;

    ktos.setImie("Jan");
    ktos.setNazwisko("Kowalski");
    cout << ktos.getImie() << " " << ktos.getNazwisko();

    osoba *ktos_d = new osoba;

    ktos_d->setImie("aaaa");
    delete ktos_d;
    return 0;
}