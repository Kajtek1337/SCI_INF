


#include <iostream>
#include <string>
using namespace std;

string szyfrcezara(string zdanie)
{
	int przesuniecie;
	cout << "o ile przesuwamy" << endl;
	cin >> przesuniecie;
	cout << endl;
	for (int i = 0; i < zdanie.size(); i++)
	{
		if (zdanie[i] < 123 && zdanie[i] > 96)
		{
			zdanie[i] += przesuniecie;

		}
	}
	return zdanie;
}


int main()
{
	string zdanie;
	int sposob;
	cout << "napisz zdanie/slowo" << endl;

	getline(cin, zdanie);
	cout << "sposób szyfrowania (1-4)" << endl;
	cout << "1. szyfr cezara" << endl;
	cout << "2. szyf przestawieniowy" << endl;
	cout << "3. szyf cezara i przestawieniowy" << endl;
	cout << "4. Odzszyfrowywanie" << endl;
	cin >> sposob;

	cout << "Szyfr to: " << szyfrcezara(zdanie) << endl;

}



