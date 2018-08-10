#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int is_palindrome(int n);
        int n;
	int nmax;

	for ( int i=999; i >= 100; i--)
	{
		for (int j=999; j>=100; j--)
		{
			n = i * j;
			if (is_palindrome(n) && nmax < n)
				nmax = n;
		}
	}
	cout << "maximum palindrome: " << nmax << endl;

	return 0;
}

int is_palindrome (int n)
{
	int status = 1;
	int ndigit = 0;
	int ntemp;

	ntemp = n;
	while (ntemp != 0)
	{
		ndigit++;
	        ntemp /= 10;
	}
	ntemp = n;
        for (int i = 1; i<= ndigit/2; i++)
	{
		int head = ntemp/pow(10, ndigit-i*2+1);
		int end = ntemp%10;
		if ( head != end)
			status = 0;
                ntemp = (ntemp - head*pow(10, ndigit-i*2+1))/10;
	}
	return status;
}	
