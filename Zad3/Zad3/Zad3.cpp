#include <iostream>

using namespace std;

double zamianaStopni(double k) {

    double wynik = (k - 273);

    return wynik;
}

int main()
{
    float k;

    cout << "Podaj temperature w Kelvinach: \n" << endl;

    cin >> k;

    cout << "Temperatura w Kelvinach to: " << k << endl;

    cout << "Temperatura w stopniach C to: " << zamianaStopni(k) << endl;

    return 0;
}

