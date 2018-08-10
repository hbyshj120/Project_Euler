#include <iostream>

using namespace std;

int main()
{
	int n;
	long int sum1;
	long int sum2;

	cin >> n;
	for (int i=1; i<= n; i++)
	{
		sum1 += i*i;
		sum2 += i;
	}
	sum2 *= sum2;

	cout << "diff: " << sum2 - sum1 << endl;

	return 0;
}
