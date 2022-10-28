#include <iostream>

using namespace std;


int main()
{
	int a, b;

	cout << "Podaj cene produktu: " << endl;

	cin >> a;

	cout << "Podaj cene sprzedazy: " << endl;

	cin >> b;

	if (a < b || a < 0 || b < 0) {

		int wynik = b - a;

		cout << "Zysk: " << wynik << endl;
	}
	else {

		int wynik = a - b;

		cout << "Strata: " << wynik << endl;
	}
}


