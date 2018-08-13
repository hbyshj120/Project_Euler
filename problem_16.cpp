#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> digits;
	int inc, sum;
        int nn, base = 2;
	int nprod;
	vector<int>::iterator iter;

	cin >> nn;
	digits.push_back(1);
	for (int i=1; i<=nn; i++)
	{
		inc = 0;
		for (iter=digits.begin(); iter != digits.end(); iter++)
		{
			nprod = *iter * base + inc;
			if (nprod <= 9)
			{
				*iter = nprod;
				inc = 0;
			}
			else
			{
				*iter = nprod%10;
			       inc = nprod/10;
			}
			//cout << i << " current digit: " << *iter << " inc: " << inc << endl;
		}
	        while (inc != 0)
		{
			digits.push_back(inc%10);				
			inc = inc/10;
		}
	}
        sum = 0;
	for (iter=digits.begin(); iter != digits.end(); iter++)
	{
		sum += *iter;
		cout << *iter << endl;
	}
	cout << "summation of all digits: " << sum << endl;
	return 0;
}
	                      		       


