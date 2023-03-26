#include <iostream>
#include <ctime>

using namespace std;

class Liczba
{
private:
    int x;

public:
    Liczba(int px) { x = px; } // brak wartosci domyslnej
    void setX(int px) { x = px; }
    int getX() { return x; }
};

int main()
{
    srand(time(NULL));
    Liczba *tab[100]; // tablica wskaznikow do obiektow
    for (int i = 0; i < 100; i++)
    {
        tab[i] = new Liczba(rand() % 101);
    }

    for (int i = 0; i < 100; i++)
        cout << tab[i]->getX() << " ";
    return 0;
}