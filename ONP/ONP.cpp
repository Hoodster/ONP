// ONP.cpp : Odwrócona notacja polska // REVERSED POLISH NOTATION
// 2019 © Jakub Porębski

#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>
#include <stdlib.h>

using namespace std;

int main()
{
	int digitsStack= 0; 
	double v1, v2, S[10];
	string element;

	cout << "Type one character and then press ENTER. When mathematical operation is finished then type '=' character" << endl;
	while (true) 
	{
		getline(cin, element);

		if (element == "=") break;             

		if (element != "+" && element != "-" && element != "*" && element != "/") {
			S[++digitsStack] = atof(element.c_str());
		}
		else
		{                   
			v2 = S[digitsStack--];      
			v1 = S[digitsStack];
			switch (element[0])     
			{
			case '+': v1 += v2; break;
			case '-': v1 -= v2; break;
			case '*': v1 *= v2; break;
			case '/': v1 /= v2; break;
			}
			S[digitsStack] = v1;      
		}
	}

	cout << fixed << S[digitsStack] << endl;
	cin.get();

	return 0;
}