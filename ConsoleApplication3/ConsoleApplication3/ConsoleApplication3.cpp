#include <iostream>
using namespace std;
int main()
{
    int a[20];
    int b=0;
    srand(time(NULL));
    for (int i=0; i < 20; i++)
    {
        a[i] = rand() % 100;
        b = b+a[i];
        cout << a[i] << endl;
    }
    cout << "Suma: " << b;
}