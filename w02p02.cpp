#include <iostream>
#include <ctime>

using namespace std;

class Liczba
{
private:
    int x;

public:
    Liczba(int px = 0) { x = px; }
    void setX(int px) { x = px; }
    int getX() { return x; }
};

int main()
{
    srand(time(NULL));
    // Liczba x1(101);
    // cout << x1.getX();

    Liczba tab[100];
    for (int i = 0; i < 100; i++)
        tab[i].setX(i);
    for (int i = 0; i < 100; i++)
        cout << tab[i].getX() << " ";
    return 0;
}