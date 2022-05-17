#include <bits/stdc++.h>
using namespace std;
// Data Type - How much memory to set aside for the data we want to associate with it's name

int main(int argc, char const *argv[])
{
    cout << "Data Types" << endl;

    // short int num = 10;
    // float num1 = 6.9999999;    // Floats can only hold upto 6 decimals for precision
    // float num2 = 3.1111111;
    double number = 420.9929;
    // Double can hold upto 15 decimals for precision
    bool isAdult = true;
    char myGrade = 'A';
    // Printf for printing in a specific format
    // printf("Sum = %.7f\n", (num1 + num2));

    // We can also allow the compiler to decide the datatype using auto
    auto isMarried = true;
    cout << "Size of int: " << sizeof(int) << endl;
    return 0;
}
