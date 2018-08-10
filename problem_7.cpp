#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	int n;
	vector<int> prime_vec;

	cin >> n;
	prime_vec.push_back(2);

        int i = 3;
	while (prime_vec.size() < n)
	{
		int j = 2;
		int ii = sqrt(i);
		while (i % j != 0 && j<= ii)
		{
			j++;
		}
		if ( j == ii+1)
			prime_vec.push_back(i);
		i++;
	}
        cout << n << "-th prime number: " << prime_vec.at(n-1) << endl;

	return 0;
}
