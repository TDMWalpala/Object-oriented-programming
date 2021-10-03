#include <iostream>

using namespace std;

class AbstractEmployee{
  virtual void AskForPromotion()=0;
};

class Employee:AbstractEmployee{
  private:
    string Name;
   string Company;
   int Age;
  public:
      void setName(string name){
          Name  =  name;
      }
      string getName()
      {
        return Name;
      }

      void setCompany(string company){
          Company  =  company;
      }
      string getCompany()
      {
        return Company;
      }

       void setAge(int age){
          Age  =  age;
      }
      int getAge()
      {
        return Age;
      }

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
   void AskForPromotion(){
     if(Age>30)
          cout<<Name<< " got promoted" <<endl;
     else
        cout<< Name<< " sorry no promotion for you"<<endl;
   }

};

int main()
{
    Employee employee1= Employee("Tharindu", "YT-LMG", 20);

    Employee employee2= Employee("Darshana", "Amazon", 35);

    employee1.AskForPromotion();
    employee2.AskForPromotion();

    return 0;
}
