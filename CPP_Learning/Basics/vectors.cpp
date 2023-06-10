#include <bits/stdc++.h>

using namespace std;
int main(int argc, char const *argv[])
{
    // Vectors are dynamic arrays
    int len;
    vector<string> hello;

    // vector<type of data we wanna store inside> var_name;
    // Methods like push and pop can be used with vectors
    // vector.push_back(value)
    // value is the value to be pushed
    // vector.pop_back()
    hello.push_back("Hello");
    hello.push_back("World");
    hello.push_back("Delete_this"); 
    // We can also insert an element at a specific position

    hello.insert(hello.begin() + 1, "Final");
    // hello.begin() is the beginning of the vector

    // Deleting an element from the vector
    // Accessing and element of a vector
    hello.erase(hello.begin()+3);
    
    cout << hello.at(2) << "\n\n";
    len = hello.size();

    for (int i = 0; i < len; i++)
    {
        cout << hello[i] << endl;
    }

    return 0;
}
