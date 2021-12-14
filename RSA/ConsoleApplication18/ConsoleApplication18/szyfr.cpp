#include "szyfr.h"
#include <string>
#include <iostream>
using namespace std; 

string szyfr::podst(string ciag1)
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
string szyfr::prz(string ciag2)
{
	for (int i = 0; i < ciag2.length() - 1; i += 2)
	{
		swap(ciag2[i], ciag2[i + 1]);
	}
	return ciag2;
}
string szyfr::odszyfr(string ciag3)
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
int modInverse(int a, int m)
{
	for (int x = 1; x < m; x++)
		if (((a%m) * (x%m)) % m == 1)
			return x;
}
string szyfr::rsa(string ciag)
{
	int l1, l2;
	cout << "podaj pierwsza liczbe" << endl;
	cin >> l1;
	cout << "podaj druga liczbe" << endl; 
	cin >> l2;
	int n;
	n = l1 * l2; 
	int euler;
	euler = (l1 - 1) * (l2 - 1);
	cout << "wybierz liczbe z przedzialu od 1 do " << euler << ". Liczby e i " << euler << " najlepiej pierwsze" << endl; 
	int e; cin >> e;
	int d;
	d = modInverse(e, euler);
	
	pair<int, int> publiczny;
	publiczny.first = n;
	publiczny.second = e;
	cout << "klucz publiczny: " << publiczny.first << "   " << publiczny.second << endl;

	pair<int, int> prywatny;
	prywatny.first = n;
	prywatny.second = d;
	cout << "klucz prywatny: " << prywatny.first << "   " << prywatny.second << endl;
	return " ";
	//pair wzialem na podstawie tego https://www.geeksforgeeks.org/pair-in-cpp-stl/ 
	
	

}
