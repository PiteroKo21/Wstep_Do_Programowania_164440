#include <iostream>

using namespace std;

int main()
{
    int a[5] = { 1,2,3,4,5};

    for (int i = 0; i < size(a); i++) {

        cout << a[i] << endl;
    }

    int parzyste[5] = { 2, 4, 6, 8, 10 };

   cout << "Lenght of array: " << sizeof(parzyste)/sizeof(int);

    int aa[20];

    int suma = 0;


    srand(time(NULL));

    cout << "Wygenerowane liczby: ";

    for (int i = 0; i < size(aa); i++) {

        aa[i] = rand() % 101;

        suma = suma + aa[i];

        
        cout << "  " << aa[i];


    }
    cout << endl;

    cout << "Suma: " << suma;


}
