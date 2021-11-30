#include <cmath>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <time.h>
#include <vector>
#include "algorytm.h"


using namespace std;

int main()
{
	algorytm zmienna;

	int odp;
	cout << "wybierz algorytm" << endl;
	cout << "1. algorytm babelkowy" << endl;
	cout << "2. algorytm wstawieniowy" << endl;
	cin >> odp;
	if (odp == 1)
	{
		zmienna.algorytmbabel();
	}
	if (odp == 2)
	{
		zmienna.algorytmwstawianie();
	}
}