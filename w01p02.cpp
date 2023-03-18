#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    time_t czas_systemowy = time(NULL);
    tm *czas = localtime(&czas_systemowy);
    cout << czas->tm_year + 1900 << "."
         << czas->tm_mon + 1 << "."
         << czas->tm_mday << "   "
         << czas->tm_hour << ":"
         << czas->tm_min << ":"
         << czas->tm_sec;

    return 0;
}