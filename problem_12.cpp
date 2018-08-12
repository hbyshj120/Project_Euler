#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int count, nn;
	long int nt;

	int i = 1;
	nt = 1;
	count = 1;
	cin >> nn;
	while (count <= nn)
	{
		count = 0;
		i++;
		nt += i;
		for (long int j=1; j<sqrt(nt); j++)
			if (nt%j == 0)
				count+=2;
		if(pow(sqrt(nt), 2) == nt)
			count++;
	}
	cout << nt << endl;

	return 0;
}
