#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;
int main()
{   //Exercise4.1 105
	int num = 5 + 10 * 20 / 2;
	cout << num << endl;

	//Exercise4.2
	vector<int> vec = { 0,2,4,6,8 };
	//print 0
	cout << *vec.begin() << endl;
	//print 1
	cout << *vec.begin() + 1 << endl;
	return 0;
}

