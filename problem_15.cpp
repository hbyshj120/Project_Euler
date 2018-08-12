#include <iostream>

using namespace std;

int main()
{
	int n, ng, nd=2;
        long long int n1, n2;
	cin >> n;
	ng = n*nd;
        long int npath;

	n1 = 1;
	n2 = 1;
	for (int i=1; i<=n/2; i++)
        {
		n2 *= (ng-i*2+2)*(ng-i*2+1)/(n-i+1);
		n1 *= i;
	}
	if (n%2 ==1)
	{
		n2 *= (ng - n + 1);
		n1 *= (n/2 + 1);
        }
	npath = n2/n1;

	cout << npath << endl;

	return 0;
}
