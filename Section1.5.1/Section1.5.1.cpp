// Section1.5.1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Sales_item.h"
#include <iostream>

using namespace std;

int main()
{
	//Exercise 1.20
	cout << "Please enter book transactions" << endl;
	Sales_item book;
	while (cin >> book) {
		cout << book << endl;
	}

	//Exercise 1.21
	cout << "Please enter two transactions with the same ISBN" << endl;
	Sales_item book1, book2;
	cin >> book1 >> book2;
	cout << "\nThe sum of two items is " << book1 + book2 << endl;


	//Exercise 1.22
	cout << "Please enter book transactions with the same ISBN" << endl;
	Sales_item sum, item;
	cin >> sum;
	while (cin >> item) {
		sum += item;
	}
	cout << "\nThe sum of transctions is " << sum << endl;

	return 0;
}

