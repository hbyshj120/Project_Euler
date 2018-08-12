#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
        int n;
        const int n1 = 20, n2= 20;
	int nv[n1][n2];
	ifstream myfile ("problem_11.dat");
	if (myfile.is_open())
	{
		int i = 0;
		int j = 0;
		while( myfile>>n)
		{
			nv[i][j] = n;
			if (j == n2-1)
			{
				j = 0;
			        i++;
			}
			else
				j++;
		}
		myfile.close();
	}
	else cout << "unable to open file";

	int nprod, nprod_max=0;
	int max1, max2, max3, max4;
	int left, right, top, bottom, diag1, diag2, diag3, diag4;
        for (int i=0; i<n1; i++)
		for (int j=0; j<n2; j++)
		{
			if (i-3 >=0)
				left = nv[i][j]*nv[i-1][j]*nv[i-2][j]*nv[i-3][j];
			if (i+3 <n1)
				right = nv[i][j]*nv[i+1][j]*nv[i+2][j]*nv[i+3][j];
			if (j-3 >=0)
				bottom = nv[i][j]*nv[i][j-1]*nv[i][j-2]*nv[i][j-3];
			if (j+3 <n2)
				top = nv[i][j]*nv[i][j+1]*nv[i][j+2]*nv[i][j+3];
			if (i-3 >= 0 && j+3 <n2)
				diag1 = nv[i][j]*nv[i-1][j+1]*nv[i-2][j+2]*nv[i-3][j+3];
			if (i-3 >= 0 && j-3 >=0)
	       			diag2 = nv[i][j]*nv[i-1][j-1]*nv[i-2][j-2]*nv[i-3][j-3];
			if (i+3 < n1 && j-3 >=0) 
				diag3 = nv[i][j]*nv[i+1][j-1]*nv[i+2][j-2]*nv[i+3][j-3];
			if (i+3 < n1 && j+3 <n2)
				diag4 = nv[i][j]*nv[i+1][j+1]*nv[i+2][j+2]*nv[i+3][j+3];
                        max1 = (left > right)?left:right;
			max2 = (top > bottom)?top:bottom;
                        max3 = (diag1 > diag2)?diag1:diag2;
			max4 = (diag3 > diag4)?diag3:diag4;
			nprod = (max1 > max2)?max1:max2;
			max1 = nprod;
			max2 = (max3 > max4)?max3:max4;
	 		nprod = (max1 > max2)?max1:max2;
                        if (nprod > nprod_max)
				nprod_max = nprod;
		}
	cout << "greatest product: " << nprod_max << endl;
                     
	return 0;
}

