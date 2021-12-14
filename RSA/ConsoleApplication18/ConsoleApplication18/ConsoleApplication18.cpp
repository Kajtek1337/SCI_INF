#include <iostream>
#include <string>
#include "szyfr.h"
using namespace std;

int main()
{
	szyfr zmienna;
	string podprzes;
	string przestawianie;
	string cezara;
	string rsa;
	int odp;
	string ciag;
	cout << endl << "podaj ciag znakow (male litery): " << endl;
	getline(cin, ciag);
	cout << endl << "Co robimy?" << endl;
	cout << endl << "1. Szyfr podstawieniowy" << endl;
	cout << endl << "2. Szyfr przestawieniowy" << endl;
	cout << endl << "3. Szyfr podstawieniowy i przestawieniowy" << endl;
	cout << endl << "4. Odszyfruj tekst" << endl;
	cout << endl << "5. RSA" << endl;
	cin >> odp;
	if (odp == 1)
	{
		cezara = zmienna.podst(ciag);
		cout << endl << cezara << endl;
	}
	else if (odp == 2)
	{
		przestawianie = zmienna.prz(ciag);
		cout << endl << przestawianie << endl;

	}
	else if (odp == 3)
	{
		podprzes = zmienna.podst(ciag);
		podprzes = zmienna.prz(podprzes);
		cout << podprzes;

	}
	else if (odp == 4)
	{
		cout << endl << "twoje wyniki: " << endl;
		cout << zmienna.odszyfr(ciag);
	}
	else if (odp == 5)
	{
		rsa = zmienna.rsa(ciag);
		cout << rsa << endl; 
	}
}