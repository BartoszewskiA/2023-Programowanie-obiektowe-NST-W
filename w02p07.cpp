#include <iostream>
#include <ctime>

using namespace std;

// Random random;
// cout<< random.nextInt();   - wylosuje integera
// cout<< random.nextInt(n);   - wylosuje integera z zakresu <0,n)
// cout<< random.nextInt(a,b);   - wylosuje integera z zakresu <a,b)
// cout<< random.nextDouble();   - wylosuje doublaz zakresu <0,1)

class Random
{
public:
    Random() { srand(time(NULL)); }
    int nextInt() { return rand(); }
    int nextInt(int n) { return rand() % n; }
    int nextInt(int a, int b) { return rand() % (b - a) + a; }
    double nextDouble() { return rand() % 10000 / 10000.0; }
};

int main()
{
    Random random;
    for (int i = 0; i < 20; i++)
    {
        cout << random.nextDouble() << " ";
    }
    return 0;
}