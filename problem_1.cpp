#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int nt = 2;
	int *num = NULL; // pointer to int, initialize to nothing.
        int nmax;

        num = new int[nt];

	cout << "Enter two natural numbers:" << endl;
	for (int i=0; i<nt; i++)
	{
		cin >> num[i];
	}

        cout << "Enter the top range" << endl;
        cin >> nmax;

	int nsum = 0;
        for (int i=0; i< (nmax-1)/num[0]; i++)
		nsum += num[0] * (i+1);
	
 	for (int j=0; j< (nmax-1)/num[1]; j++)
		nsum += num[1] * (j+1);

        for (int k=0; k< (nmax-1)/(num[0]*num[1]); k++)
	        nsum -= num[0]*num[1]*(k+1);

        cout << "Total sum of all the multiples of " << num[0] << " or " << num[1] << " below " << nmax << " is: " << nsum << endl;

	delete [] num;
	num = NULL;     // Be sure the deallocated memoery isn't used.

	return 0;
}
