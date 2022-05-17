#include <bits/stdc++.h>
using namespace std;

class Book
{
public:
    string title;
    string author;

    void readBook()
    {
        cout << "Reading " + this->title + " by " + this->author << endl;
    }
};

int main(int argc, char const *argv[])
{

    Book book1;
    book1.title = "Harry Potter";
    book1.author = "JK Rowling";

    book1.readBook();
    cout << book1.title;
    return 0;
}
