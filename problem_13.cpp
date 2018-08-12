#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
        char c;
        const int n1 = 100, n2= 50;
	int nv[n1][n2];
	ifstream myfile ("problem_13.dat");
	if (myfile.is_open())
	{
		int i = 0;
		int j = 0;
		while( myfile.get(c))
		{
			if (c != '\n')
			{
				nv[i][j] = (int)(c - '0');
				if (j == n2-1)
				{
					j = 0;
			        	i++;
				}
				else
					j++;
			}	
		}
		myfile.close();
	}
	else cout << "unable to open file";

	int inc, sum, digit;
	inc = 0;
        for (int j=n2-1; j>=0; j--)
	{
		sum = 0;
		for (int i=0; i<n1; i++)
		{
			sum += nv[i][j];
		}
		sum += inc;
                digit = sum % 10;
		cout << j+1 << "-th: " << digit << endl; 
		inc = sum/10;
	}
        cout << 0 << "-th: " << inc << endl;
                     
	return 0;
}

