#include <iostream>

using namespace std;

int zamianaA(int a, int b) {

    a = b;

    return a;
}
int zamianaB(int a, int b) {

    b = a;

    return b;
}

int main()
{
    
    int a;

    int b;

    cout << "Podaj pierwsza liczbe calkowita: \n" << endl;;

    cin >> a;

    cout << "Podaj druga liczbe calkowita: \n" << endl;;

    cin >> b;

    cout << "Wartosc przed zamiana: \n" << endl;

    cout << "a = " << a << endl;;
    cout << "b = " << b << endl;;

    cout << "Wartosc po zamianie: \n" << endl;


    cout << "a = " << zamianaA(a, b) << endl;;
    cout << "b = " << zamianaB(a, b) << endl;;

    return 0;
}
