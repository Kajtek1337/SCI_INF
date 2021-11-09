#include <iostream>
#include <string>
using namespace std;

string podst(string ciag1)
{
	string x;
	unsigned char a;
	int lznak;
	cout << endl << "przesuwamy o: " << endl;
	cin >> lznak;

	if (lznak < 1)
	{
		cout << endl << "MIN. LICZBA, KTORA MUSISZ WPISAC TO 1!!!" << endl;
		cout << endl << "nie moge zmienic watrosci" << endl;
		return ciag1;
	}

	if (lznak > 26)
	{
		cout << endl << "MAX. LICZBA, KTORA MOZESZ WPISAC TO 26!!!" << endl;
		cout << endl << "nie moge zmienic wartosci" << endl;
		return ciag1;
	}

	for (int i = 0; i < ciag1.length(); i++)
	{
		if (ciag1[i] > 96)
		{
			a = ciag1[i] + lznak;

			if (a > 122)
			{
				a = a % 123 + 97;
			}
			x += a;
		}
		else
		{
			x += ciag1[i];
		}

	}
	return x;
}
string prz(string ciag2)
{
	for (int i = 0; i < ciag2.length() - 1; i += 2)
	{
		swap(ciag2[i], ciag2[i + 1]);
	}
	return ciag2;
}
string odszyfr(string ciag3)
{
	string b = ciag3;

	for (int c = 1; c < 26; c++)
	{


		for (int i = 0; i < ciag3.length(); i++)
		{
			if (ciag3[i] > 96 && ciag3[i] < 123)
			{


				ciag3[i] -= c;
				if (ciag3[i] < 97)
				{
					ciag3[i] = ciag3[i] % 123 + 26;

				}

			}


		}
		cout << " " << ciag3 << " ";
		ciag3 = b;
	}
	return ciag3;
}




//MAIN//




int main()
{
	string podprzes;
	string przestawianie;
	string cezara;
	int odp;
	string ciag;
	cout << endl << "podaj ciag znakow (male litery): " << endl;
	getline(cin, ciag);
	cout << endl << "Co robimy?" << endl;
	cout << endl << "1. Szyfr podstawieniowy" << endl;
	cout << endl << "2. Szyfr przestawieniowy" << endl;
	cout << endl << "3. Szyfr podstawieniowy i przestawieniowy" << endl;
	cout << endl << "4. Odszyfruj tekst" << endl;
	cin >> odp;
	if (odp == 1)
	{
		cezara = podst(ciag);
		cout << endl << cezara << endl;
	}
	else if (odp == 2)
	{
		przestawianie = prz(ciag);
		cout << endl << przestawianie << endl;

	}
	else if (odp == 3)
	{
		podprzes = podst(ciag);
		podprzes = prz(podprzes);
		cout << podprzes;

	}
	else if (odp == 4)
	{
		cout << endl << "twoje wyniki: " << endl;
		cout << odszyfr(ciag);
	}
}
