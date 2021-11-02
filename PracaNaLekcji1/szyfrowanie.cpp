

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string liczba;
	cout << "podaj o ile przesuwamy" << endl;  
	cin >> liczba;
	getline(cin,liczba); 
	cout << "sposób szyfrowania (1-4)" << endl;
	cout << "1. szyfr cezara" << endl;
	cout << "2. szyf przestawieniowy" << endl;
	cout << "3. szyf cezara i przestawieniowy" << endl;
	cout << "4. Odzszyfrowywanie" << endl; 

}

