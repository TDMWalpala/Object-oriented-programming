#include <iostream>

using namespace std;

class Employee{
  public:
   string Name;
   string Company;
   int Age;

   void IntroduceYourself(){
       cout<<"Name - "<< Name << endl;
       cout<<"Company - " << Company << endl;
       cout<<"Age - " << Age << endl;
       cout<<""<<endl;
   }
};

int main()
{
    Employee employee1;
    employee1.Name = "Tharindu";
    employee1.Company = "YT-LMG";
    employee1.Age = 20;
    employee1.IntroduceYourself();

    Employee employee2;
    employee2.Name = "Darshana";
    employee2.Company = "Amazon";
    employee2.Age = 21;
    employee2.IntroduceYourself();


    return 0;
}
