#include <iostream>

using namespace std;

class test
{
private:
    int x;
    char znak;
    string napis;

public:
    test(int X, char ZNAK, string NAPIS) : x(X), znak(ZNAK), napis(NAPIS)
    {
    }
    void wypisz()
    {
        cout << "x=" << x << endl
             << "znak=" << znak << endl
             << "napis=" << napis;
    }
};

int main()
{
    test t1(10, 'c', "Ala ma kota");
    t1.wypisz();
    return 0;
}