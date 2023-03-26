#include <iostream>

using namespace std;

class test
{
public:
    int dana;
    static int dana_wspolna;
};

int test::dana_wspolna;

int main()
{
    test a, b;
    a.dana = 10;
    test::dana_wspolna = 100;
    b.dana = 20;
    test::dana_wspolna = 200;
    cout << "obiekt a: " << a.dana << " " << a.dana_wspolna << endl;
    cout << "obiekt b: " << b.dana << " " << b.dana_wspolna;

    return 0;
}