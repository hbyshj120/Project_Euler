#include <iostream>

using namespace std;

int main()
{
	int nsum;
	int n1 = 1;
	int n2 = 2;
	int nn;
	int nmax = 4e6;

	nsum = n2;
	while ((nn = n1+ n2) <= nmax)
	{
		if ( nn % 2 == 0)
			nsum += nn;
		n1 = n2;
		n2 = nn;
	}

	cout << "sum of even-valued terms of Fibonacci sequences: " << nsum << endl;

	return 0;
}
