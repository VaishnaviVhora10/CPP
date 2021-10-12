#include<iostream>
using namespace std;
int sum(int a, int b)
{
    int c=a+b;
    return c;
}
int main()
{
int a, b;
cout<<"Enter the value of first number"<<endl;
cin>>a;
cout<<"Enter the value of second number"<<endl;
cin>>b;
cout<<"The sum is"<<sum(a,b)<<endl;

}