#include <iostream>

using namespace std;

class test
{
public:
    test()
    {
        cout << "\nZadzialal konstruktor\n";
        zrodCos();
    }
    ~test()
    {
        cout << "\nZadzailal destruktor\n";
    }
    void zrodCos()
    {
        cout << "\nklasa robi to do czego zostala stworzina\n";
    }
};

int main()
{
    test* test1 = new test;
    delete test1;
    return 0;
}