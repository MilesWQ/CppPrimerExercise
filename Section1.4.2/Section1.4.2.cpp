// Section1.4.2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	////Exercise 1.12.Calculate the sum from -100 to 100.
	//int sum = 0;
	//for (int i = -100; i <= 100; ++i) {
	//	sum += i;
	//}
	//cout << sum << endl;

	//Exercise 1.13
	int sum2 = 0;
	for (int i = 1; i <= 10; ++i) {
		sum2 += i;
	}
	cout << "Sum of 1 to 10 inclusive is " << sum2 << endl;

	return 0;
}

