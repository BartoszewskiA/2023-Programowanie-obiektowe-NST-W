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
};

int main()
{
    RownanieLiniowe r1(10, 40);
    cout << r1.getX();
    return 0;
}