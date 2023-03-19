#include <iostream>
#include <ctime>

using namespace std;

class Liczba
{
private:
    int x;

public:
    Liczba() { x = rand() % 1000; } //konstruktor domyslny
    Liczba(int x) { this->x = x; }
    void setX(int x) { this->x = x; }
    int getX() { return x; }
};

int main()
{
    srand(time(NULL));
    Liczba x1(101); // wywolany jest konstruktor z parametrem
    cout << x1.getX();

    // Liczba tab[100]; // wywołany jest konstruktor domyślny
    // for (int i = 0; i < 100; i++)
    //     cout << tab[i].getX() << " ";
    return 0;
}