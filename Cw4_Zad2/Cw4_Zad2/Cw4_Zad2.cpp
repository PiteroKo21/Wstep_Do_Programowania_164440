#include <iostream>

using namespace std;


int main()
{
	int rok;

	cout << "Podaj rok: " << endl;

	cin >> rok;

	if (rok % 4 == 0 && rok % 100 != 0 || rok % 400 == 0){

		cout << "Rok jest przystepny " << endl;

	}
	else{

		cout << "Rok nie jest przystepny " << endl;
	}
}

