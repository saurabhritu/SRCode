//algoritham using pre matrix sum with O(4) time,(not so good algoritham)
#include<iostream>
using namespace std;
#define R 3
#define C 3

int A[R][C] = {-5,-4,-1,-3,2,4,2,5,8 };

int print(){
	for(int i=0;i<R;i++){
	for(int j=0;j<C;j++){
		cout<<A[i][j]<<" ";
	}
	cout<<"\n";
}

}

int preMatsum(int B[R][C]){

for(int i=0;i<R;i++){
	for(int j=0;j<C;j++){
		if(j==0)
		B[i][j]=B[i][j]+B[i-1][j];
		else
		B[i][j] = B[i][j-1] +B[i-1][j]+ B[i][j]-B[i-1][j-1];
	}
}

for(int i=0;i<R;i++){
	for(int j=0;j<C;j++){
		cout<<B[i][j]<<" ";
	}
	cout<<"\n";
}
// calculating submatrix_sum
int sum=0;
int sum1=0;
for (int l_i = 0; l_i <= R - 1; l_i++)
    {

      for (int l_j = 0; l_j <= C - 1; l_j++)
	{

	  for (int b_i = l_i ; b_i <= R - 1; b_i++)
	    {

	      for (int b_j = l_j ; b_j <= C - 1; b_j++)
		{ sum =0;
			if(l_j==0)
			sum += B[b_i][b_j]-B[l_i-1][b_j];
		else
			sum += B[b_i][b_j]-B[l_i-1][b_j]-B[b_i][l_j-1]+B[l_i-1][l_j-1];
			// comparing current sum with previous sum
		if(sum>sum1)
		sum1=sum;
		}
		
	    }
	}
    }
	cout<<" max Sum is equal  to "<<sum1<<endl;
}

int main ()
{
	print();
cout<<"\n";
  preMatsum(A);
  return 0; 
}
