 #include <iostream>

using namespace std;

class AbstractEmployee{
  virtual void AskForPromotion()=0;
};

class Employee:AbstractEmployee{
  private:

   string Company;
   int Age;
  protected:
    string Name;
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
   virtual void Work()
   {
      cout<<Name<< " is checking emails, task backlog, performing task.. "<<endl;
   }

};

class Developer:public Employee{
   public:
       string FavProgrammingLanguage;
       Developer(string name, string company, int age, string FavProgrammingLanguage)
       :Employee(name,company,age)
       {
           FavProgrammingLanguage = FavProgrammingLanguage;
       }
       void FixBug()
       {

           cout<<Name<<" fixed bug using "<< FavProgrammingLanguage<<endl;
       }

        void Work()
   {
      cout<<Name<< " is writing"<< FavProgrammingLanguage << " code. "<<endl;
   }

};

class Teacher:public Employee{
    public:
     string Subject;
     void PrepareLesson()
     {

         cout << Name << " is preparing "<< Subject<< " lesson"<<endl;
     }
     Teacher(string name, string company, int age,string subject)
       :Employee(name,company,age)
       {
           Subject = subject;
       }

     void Work()
   {
      cout<<Name<< " is teaching "<< Subject <<endl;
   }
};

int main()
{

    Developer d=Developer("Tharindu", "YT-LMS",20,"C++");
    Teacher t =Teacher("Jack", "Cool School",35,"Maths");

    Employee *e1 = &d;
    Employee *e2 = &t;

    e1->Work();
    e2->Work();


    return 0;
}
