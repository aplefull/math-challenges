#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double sum = 0, lim;

	cout << "Limit: ";
	cin >> lim;

	for (int  i = 1; i < lim; i++){

		for (int k = 1; k < i; k++) {
			if (i % k == 0) {
				sum += k;
			}
		}

		if (sum == i) {
			cout << i << endl;
		}

		sum = 0;
	}

    return 0;
}

