#include <iostream>

using namespace std;

class RownanieLiniowe
{
private:
    int a;
    int b;
    double x;

public:
    RownanieLiniowe(int a, int b)
    {
        this->a = a;
        this->b = b;
        x = -b / (double)a;
    }
    void setA(int a) { this->a = a; }
    void setB(int b) { this->b = b; }
    int getA() { return a; }
    int getB() { return b; }
    double getX() { return x; }
    bool rozwiazywanosc()
    {
        if (a == 0)
            return false;
        else
            return true;
    }
};

int main()
{
    RownanieLiniowe r1(0, 40);
    if (r1.rozwiazywanosc())
        cout << r1.getX();
    else
        cout << "brak rozwiazan";
    return 0;
}