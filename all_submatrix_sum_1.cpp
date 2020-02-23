//Bruteforce algoritham with O(6) time,(very bad algoritham)
#include<iostream>
using namespace std;
#define R 3
#define C 3

int
main ()
{
  int A[R][C] = { 1,2,3,4,5,6,7,8,9 };
  int sum = 0, sum1 = 0;
  for (int l_i = 0; l_i <= R - 1; l_i++)
    {

      for (int l_j = 0; l_j <= C - 1; l_j++)
	{

	  for (int b_i = l_i ; b_i <= R - 1; b_i++)
	    {

	      for (int b_j = l_j ; b_j <= C - 1; b_j++)
		{

		  for (int i = l_i; i <= b_i; i++)
		    {

		      for (int j = l_j; j <= b_j; j++)
			{

			  sum += A[i][j];
			}
		    }
		  sum1 += sum;
		  cout << "sum = " << sum << endl;
		  sum = 0;
		}
	    }
	}
    }
  cout << "sum1 = " << sum1 << endl;

  return 0;
}


