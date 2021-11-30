#include "algorytm.h"
#include <cmath>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <time.h>
#include <vector>

using namespace std;

static int N = 100;


void algorytm::algorytmbabel()

{
	vector <int> babelkowe(100);
	int j;
	int i;

	cout << " Sortowanie babelkowe\n";



	srand((unsigned)time(NULL));

	for (i = 0; i < N; i++) babelkowe[i] = rand() % 1000;
	for (i = 0; i < N; i++) cout << setw(4) << babelkowe[i];
	cout << endl;


	for (j = 0; j < N - 1; j++)
		for (i = 0; i < N - 1; i++)
			if (babelkowe[i] > babelkowe[i + 1]) swap(babelkowe[i], babelkowe[i + 1]);

	cout << "Po sortowaniu" << endl;
	for (i = 0; i < N; i++)
		cout << setw(4) << babelkowe[i];
	cout << endl;
}

void algorytm::algorytmwstawianie()
{
	vector <int> wstawianie(100);
	int a;
	int b;
	int c;

	cout << " Sortowanie przez wstawianie" << endl;

	srand((unsigned)time(NULL));

	for (a = 0; a < N; a++) wstawianie[a] = rand() % 1000;
	for (a = 0; a < N; a++) cout << setw(4) << wstawianie[a];
	cout << endl;

	for (b = N - 2; b >= 0; b--)
	{
		c = wstawianie[b];
		a = b + 1;
		while ((a < N) && (c > wstawianie[a]))
		{
			wstawianie[a - 1] = wstawianie[a];
			a++;
		}
		wstawianie[a - 1] = c;
	}

	cout << "Po sortowaniu:" << endl;
	for (a = 0; a < N; a++) cout << setw(4) << wstawianie[a];
	cout << endl;
}
