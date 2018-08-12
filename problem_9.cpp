#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	int n;

	cin >> n;

	for (int i=1; i<n/2; i++)
		for (int j=1; j<n/2; j++)
			for (int k=1; k<n/2; k++)
			{
				if (i+j+k == n && i*i+j*j==k*k)
				{
					a=i;
					b=j;
					c=k;
				}
			}
	cout << "abc: " << a*b*c << endl;
	return 0;
}
