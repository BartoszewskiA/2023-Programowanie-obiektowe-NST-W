#include <iostream>
#include <ctime>

using namespace std;

class Liczba
{
private:
    int x;

public:
    Liczba() { x = rand() % 101; }
    void setX(int px) { x = px; }
    int getX() { return x; }
};

int main()
{
    srand(time(NULL));
    Liczba x1;
    cout << x1.getX();

    // Liczba tab[100];
    // for (int i = 0; i < 100; i++)
    //     cout << tab[i].getX() << " ";
    return 0;
}