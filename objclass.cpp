#include<iostream>
using namespace std;

 class Employee
 {
      public:
     string name;
     int salary;
void details()
{
 cout<<"The name of Employee is"<<this->name<< "and salary is" <<this->salary;
}
};
int main()
{
    Employee vaish;
    vaish.name ="VAISHNAVI";
    vaish.salary =100;
    vaish.details();
   
}