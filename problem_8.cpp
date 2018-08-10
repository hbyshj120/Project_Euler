#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
        char c;
	vector<int> nvec;
	ifstream myfile ("problem_8.dat");
	if (myfile.is_open())
	{
		while( myfile.get(c))
		{
			if (c != '\n')
				nvec.push_back((int)(c - '0'));
		}
		myfile.close();
	}
	else cout << "unable to open file";

	vector<int>::iterator iter;
	vector<int>::iterator iter2;
	long int max = -10;
        int nadj;

	cin >> nadj;
	for (iter=nvec.begin(); iter <nvec.end(); iter++)
	{
		long int sum = 1;
		for (iter2 = iter; iter2 < iter + nadj; iter2++)
			sum *= *iter2;
		if (sum > max)
			max = sum;
	}
        cout << "greatest product: " << max << endl;
	return 0;
}

