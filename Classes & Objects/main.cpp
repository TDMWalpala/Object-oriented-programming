#include <iostream>

using namespace std;

class Book{
   public:
       string title;
       string author;
       int pages;
};

int main()
{
    Book book1;
    book1.title = "Madol duwa";
    book1.author = "Martin vikkramasinhe";
    book1.pages = 453;

    Book book2;
    book2.title = "Apee gama";
    book2.author = "Martin vikkramasinhe";
    book2.pages = 345;

    cout<< book1.title<<endl;
    cout<< book2.title;
    return 0;
}
