#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
	vector<int> prime_vec;
        long int nmax = 600851475143;
        cout << nmax;
	int nn   = sqrt(nmax);
        cout << nn;

	prime_vec.push_back(2);
	for (int i=3; i <= nn; i++)
	{
		int ii = sqrt(i);
		int j = 2;
		while (i % j != 0 && j<= ii)
		{
			j++;
		}
		if ( j == ii+1)
		       prime_vec.push_back(i);
	}

        vector<int>::iterator iter;
        for (iter = prime_vec.begin(); iter != prime_vec.end(); iter++)
	{
	     if ( nmax % *iter == 0)
	          cout << "prime factor: " << *iter << endl;
	}

        return 0;
}	
