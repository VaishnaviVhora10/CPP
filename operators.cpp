#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter your first value"<<endl;
    cin>>a;
    cout<<"Enter your second value"<<endl;
    cin>>b;

    //Arithmetic Operators
    cout<<"Addition a + b"<<a + b;
    cout<<"Substraction a - b"<<a - b;
    cout<<"Multiplication a * b"<<a * b;
    cout<<"Division a / b"<<a / b;

    //Increment Decrement Operators
    cout<<"Increment operator"<<a++;
    cout<<"Increment operator"<<++a;
    cout<<"Decrement operator"<<a--;
    cout<<"Decrement operator"<<--a;

    //Assignmet Operators
    // eg. int a = 6;

//comaprison operators
cout<<"The value of a == b"<<(a==b)<<endl;
cout<<"The value of a != b"<<(a!=b)<<endl;
cout<<"The value of a >= b"<<(a>=b)<<endl;
cout<<"The value of a <= b"<<(a<=b)<<endl;
cout<<"The value of a > b"<<(a>b)<<endl;
cout<<"The value of a < b"<<(a<b)<<endl;

//logical operators
cout<<((a==b) && (a<b));
cout<<((a==b))|| (a<b));
cout<<(!(a==b));
  
   return 0;
}