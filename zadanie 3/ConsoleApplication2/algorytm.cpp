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


void algorytm::szybko(int lewy, int prawy)
{
	vector <int> d(100);
	int i, j, piwot;

	i = (lewy + prawy) / 2;
	piwot = d[i];
	d[i] = d[prawy];
	j = lewy; 
	for (i = lewy; i < prawy; i++)
		if (d[i] < piwot)
		{
			swap(d[i], d[j]);
			j = j + 1;
		}
	d[prawy] = d[j];
	d[j] = piwot;
	if (lewy < j - 1)
	{
		szybko(lewy, j - 1);
	}
	if (j + 1 < prawy)
	{
		szybko(j + 1, prawy);
	}
}

void algorytm::algorytmszybkie()
{
	vector <int> szybkie(100);
	int i;

	srand((unsigned)time(NULL));

	cout << "Przed sortowaniem:\n\n";


	for (i = 0; i < N; i++) szybkie[i] = rand() % 100;
	for (i = 0; i < N; i++) cout << setw(4) << szybkie[i];
	cout << endl;


	szybko(0, 99);


	cout << "Po sortowaniu:" << endl; 
	for (i = 0; i < N; i++) cout << setw(4) << szybkie[i];
	cout << endl;
}
void algorytm::algwybieranie()
{
	vector <int> wybieranie; 
	int size = wybieranie.size();

	int k;
	for (int i = 0; i < size; i++)
	{
		k = i;
		for (int j = i + 1; j < size; j++)
			if (wybieranie[j] < wybieranie[k])
				k = j;

		swap(wybieranie[k], wybieranie[i]);
	}
	for (int i = 0; i < wybieranie.size(); i++)
	{
		cout << wybieranie[i] << endl;
	}
	
}

