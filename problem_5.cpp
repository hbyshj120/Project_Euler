#include <iostream>

using namespace std;

int main()
{
	int common(int a, int b);
	long int num;
	int nn;

	cin >> nn;
	num = nn;
	for (int i=nn-1; i>=2; i--)
		num = num * i / common(num, i);
        cout << "smallest positive number: " << num << endl;
        return 0;
}

int common(int a, int b)
{
	int n = (a < b) ? a : b;
	int c=1;

	for (int i = n; i>=2; i--)
	{
		if ( a % i == 0 && b % i == 0)
		{
			c *= i;
			a /= i;
			b /= i;
		}
	}

	return c;
}

