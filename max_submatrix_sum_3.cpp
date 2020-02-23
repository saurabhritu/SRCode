// algoritham for O(2) time using contriution of each element in sub matrix , best algoritham
#include<iostream>
using namespace std;
#define R 3
#define C 3

int submatsum(int B[R][C]){
    int sum=0;
    for(int i=0;i<R;i++)
        for(int j=0;j<C;j++)
            sum += B[i][j]*((i+1)*(j+1))*((R-i)*(C-j));

    return sum;
}
 int main(){
     int A[R][C]={1,2,3,4,5,6,7,8,9};
     cout<<"sum is equal to "<<submatsum(A)<<endl; 
     return 0;
 }