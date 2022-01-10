#pragma once
#include <vector>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <time.h>

using namespace std;
class algorytm
{
public:
	vector <int> babelkowe;
	void algorytmbabel();
	vector <int> wstawieniowe;
	void algorytmwstawianie();
	vector <int> szybkie;
	void algorytmszybkie();
	vector <int> d;
	void szybko(int lewy, int prawy); 
	vector <int> wybieranie;
	void algwybieranie();
};