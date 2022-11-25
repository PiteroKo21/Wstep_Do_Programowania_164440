#include <iostream>
using namespace std;
int funkcja(int arg[])
{
    int a = 0;
    for(int i=0;i<20;i++)
    {
        a += arg[i];
    }
    return a;
}
int main()
{
    int tablica[20];
    srand(time(NULL));
    for (int i = 0; i < 20; i++)
    {
        tablica[i] = rand() % 101;
        funkcja(tablica);
    } 
    cout << funkcja(tablica);
}