#include <iostream>

using namespace std;

int main()
{
	int godzina, a;
	
	string am;

	cout << "Podaj godzine pomiedzy 1 a 12: " << endl;

	cin >> godzina;

	cout << "Podaj czy jest to 'pm' lub 'am': " << endl;

	cin >> am;

	cout << "Podaj ile godzin w przod: " << endl;

	cin >> a;

	if (godzina <= 1 && godzina >= 12 && am == "am" || am == "pm") {

		int nowaGodzina = godzina + a;

		if (nowaGodzina > 12 && am == "am") {

			am = "pm";

			nowaGodzina = nowaGodzina - 11;

		}
		cout << nowaGodzina << am;

	}

}
