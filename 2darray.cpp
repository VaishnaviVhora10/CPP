#include<iostream>
using namespace std;
int main()
{
    int array[5][5] = {{1,2,3,4,5},{6,7,8,9,10}};
    for(int i=0;i<=4;i++){
        for(int j=0;j<=4;j++){
            cout<<array[i][j]<<endl;
        }
    }
    return 0;
    }