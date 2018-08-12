#include <iostream>

using namespace std;

int main()
{
	int is_end(long int n);
        int nstart;
        long int nn;
        int max_count = 0, nb;	
        cin >> nstart;

	for (int i=13; i<nstart; i++)
	{
		nn = i;
		int count = 0;
		while (nn != 1)
		{
			switch(is_end(nn))
			{
				case 1:
					nn = nn*3 + 1;
					break;
				case 0:
					nn /= 2;
					break;
			        default:
					cout << "wrong category!" << endl;
					break;
			}
			count++;
		}
		if (count > max_count)
		{
			max_count = count;
			nb = i;
		}
	}
	cout << "longest chain: " << nb << " with " << max_count << " chains" << endl;
	return 0;
}
int is_end(long int n)
{
	return n%2;
}
