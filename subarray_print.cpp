//This code is used to print all the subarray for a array
#include <iostream>
using namespace std;

int
main ()
{
  int A[4] = { 1, 2, 3, 4, };
  for (int i = 0; i <= 3; i++)
    {
      for (int j = i; j <= 3; j++)
	{
	  for (int k = i; k <= j; k++)
	    cout << A[k];
	  cout << endl;
	}
    }
  return 0;
}

