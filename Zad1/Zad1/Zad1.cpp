#include <iostream>

using namespace std;

double suma(double x, double y) {

	double wynik = x + y;

	return wynik;
}

int main()
{
   
	double x, y;

	cout << "Podaj pierwsza liczbe zmienno przecinkowa: \n";

	cin >> x;

	cout << "Podaj druga liczbe znienno przecinkowa: \n";

	cin >> y;

	cout << "Suma wynosi: " << suma(x, y);

	return 0;
}

