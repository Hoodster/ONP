// ONP.cpp : Odwrócona notacja polska // REVERSED POLISH NOTATION
// 2019 © Jakub Porębski

#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	int p = 0;      
	double v1, v2, S[50];
	string element;
	stringstream stream;

	cout << "Type one character and then press ENTER. When mathematical operation is finished then type '=' character" << endl;
	while (true) 
	{
		getline(cin, element);

		if (element == "=") break; 
		stream.clear();         
		stream << element;            

		if (stream >> v1)        					 
			S[p++] = v1;    
		else
		{                   
			v2 = S[--p];      
			v1 = S[--p];
			switch (element[0])     
			{
			case '+': v1 += v2; break;
			case '-': v1 -= v2; break;
			case '*': v1 *= v2; break;
			case '/': v1 /= v2; break;
			}

			S[p++] = v1;      
		}
	}

	cout << fixed << S[--p] << endl;
	cin.get();

	return 0;
}