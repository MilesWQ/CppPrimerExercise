#include "stdafx.h"
#include<vector>
#include<iostream>

using namespace std;
void exercise341();
void exercise342();
int main()
{
	exercise342();
	return 0;
}

void exercise341() {
	int arr[] = { 0,2,4,6,8,10 };
	vector<int> iv(arr, end(arr));
}

void exercise342() {
	vector<int> iv = { 1,3,5,7,9,11 };
	int arr[6] = {};
	int *p = begin(arr), *endp = end(arr);
	auto it = iv.cbegin();
	for (int *i = p; i != endp; ++i) {
		*i = *it;
		++it;
	}
	for (auto i : arr) {
		cout << i << " ";
	}
}