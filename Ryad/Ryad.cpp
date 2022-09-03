// Ryad.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <math.h>
int main()
{
	using namespace std;
	double s=0; long i; double v;
	for (double i = 3; i <= 4; i+=0.0001)
	{
		v = (double)1 / log(i);
		s += v;
	}
	cout << s;
    return 0;
}