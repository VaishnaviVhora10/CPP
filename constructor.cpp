#include<iostream>
using namespace std;
class Employee{
public:
string name;
int salary;

Employee(string name, int salary, int password)
{
    this-> name =name;
    this-> salary=salary;
    this-> password=password;
}
void details()
{
 cout<<"The name of Employee is"<<this->name<< "and salary is" <<this->salary;
}

void getpassword()
{
    cout<<"Password is"<<this->password;
}
private:
int password;
};

int main()
{
    Employee vaish("vaishnavi", 95000, 1010);
     vaish.details();
     //cout<<vaish.password;
     vaish.getpassword();
   
}