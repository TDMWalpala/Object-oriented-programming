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
   Employee(string name, string company, int age){
       Name = name;
       Company = company;
       Age = age;
   }

};

int main()
{
    Employee employee1= Employee("Tharindu", "YT-LMG", 20);
             employee1.IntroduceYourself();

    Employee employee2= Employee("Darshana", "Amazon", 21);
             employee2.IntroduceYourself();

    /*employee1.Name = "Tharindu";
    employee1.Company = "YT-LMG";
    employee1.Age = 20;
    employee1.IntroduceYourself();

    Employee employee2;
    employee2.Name = "Darshana";
    employee2.Company = "Amazon";
    employee2.Age = 21;
    employee2.IntroduceYourself();*/
    return 0;
}
