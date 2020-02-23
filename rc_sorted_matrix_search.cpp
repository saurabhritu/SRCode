//algoritham using pre matrix sum with O(4) time,(not so good algoritham)
#include<iostream>
using namespace std;
#define R 4
#define C 4

int main(){
    int A[R][C] = {10,20,30,40,19,25,33,49,27,29,37,50 };
    int i=0;
    int j=C-1;
    int key = 29;
    while(i<R || j>0){
        if(key==A[i][j]){
            cout<<"key value is prsent at index x = "<<i<<" and y = "<<j<<"\n";
            return 0;
        }
        else if(key<A[i][j])
            j--;
        else
            i++;
    }
    return 0;
}