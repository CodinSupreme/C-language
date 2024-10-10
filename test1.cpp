#include <iostream>
using namespace std;

class Book{
    public:
    string Author;
    string Name;
    int Page;

    Book(string author, string name, int page){
        Author = author;
        Name = name;
        Page = page;
    }

    void Print(){
        cout << "Name: " << Name <<endl;
        cout << "Author: " << Author <<endl;
        cout << "Page: " << Page <<endl;
    }
};

int main(){
    Book book1("Blair", "The King", 84);
    book1.Print();
    return 0;
}