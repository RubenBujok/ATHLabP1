// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	double liczba1, liczba2;
	int dzialanie;
	cout << "Podaj pierwsza liczbe." << endl;
	cin >> liczba1;
	cout << "Podaj druga liczbe." << endl;
	cin >> liczba2;
	cout << "Wybierz operacje matematyczna do wykonania:" << endl <<
		"Dodawanie: 1," << endl <<
		"Odejmowanie: 2," << endl <<
		"Mnozenie: 3," << endl <<
		"Dzielenie: 4." << endl;
	cin >> dzialanie;
	switch (dzialanie)
	{
	case 1:
		cout << "Suma = " << liczba1 + liczba2 << endl;
		break;
	case 2:
		cout << "Roznica = " << liczba1 - liczba2 << endl;
		break;
	case 3:
		cout << "Iloczyn = " << liczba1 * liczba2 << endl;
		break;
	case 4:
		if (liczba2 != 0)
		{
			cout << "Iloraz = " << liczba1 / liczba2 << endl;
		}
		else
		{
			cout << "Nie dziel przez 0." << endl;
		}
		break;
	default:
		cout << "Nie wybrales dzialania." << endl;
		break;
	}
	system("Pause");
    return 0;
}

