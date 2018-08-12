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
	while (prime_vec.back() < n)
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

        long int sum=0;
	vector<int>::iterator iter;
	for (iter=prime_vec.begin(); iter< prime_vec.end()-1; iter++)
	{
   		sum += *iter;
		cout << *iter << endl;
	}
        cout <<  "sum of prime number below " << n << " is: " << sum << endl;

	return 0;
}
