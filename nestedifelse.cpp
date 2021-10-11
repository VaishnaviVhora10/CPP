#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age";
    cin>>age;
    if(age> 150)
    {
        cout<<"Invalid Age";
    }
    else if (age>=18)
    {
        cout<<"You are elligible for voting";
    }
    else{
        cout<<"You are not elligible for voting";
    }
return 0;
}
