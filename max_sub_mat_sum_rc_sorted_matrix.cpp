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

for(int i=R-1;i>=0;i--){
	for(int j=C-1;j>=0;j--){
		if(j==C-1)
		B[i][j]=B[i][j]+B[i+1][j];
		else
		B[i][j] = B[i][j+1] +B[i+1][j]+ B[i][j]-B[i+1][j+1];
	}
}

for(int i=0;i<R;i++){
	for(int j=0;j<C;j++){
		cout<<B[i][j]<<" ";
	}
	cout<<"\n";
}
// calculating max_submatrix_sum
int sum=0;

for(int i=0;i<R;i++){
    for(int j=0;j<C;j++){
        
        if(sum<B[i][j])
        sum=B[i][j];
    }
}
cout<<"Max sub matrix sum is "<<sum<<"\n";
}
int main ()
{
	print();
cout<<"\n";
  preMatsum(A);
  return 0; 
}
