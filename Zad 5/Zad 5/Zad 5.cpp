#include <iostream>

using namespace std;

bool parzystosc(int a) {

	if (a % 2 == 0) {

		cout << "Liczba jest parzysta";

	}
	else {

		cout << "Liczba nie jest parzysta";

	}
}

int main()
{
  
	int a;

	cout << "Podaj liczbe do sprawdzenia parzystosci: " << endl;

	cin >> a;

	cout << parzystosc(a);
}

