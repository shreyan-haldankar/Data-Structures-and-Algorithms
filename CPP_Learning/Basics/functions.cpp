#include <bits/stdc++.h>

using namespace std;


// First we specify return types then we initialize the function name then we feed parameters into it99
int addNums(int Num1, int Num2);

int main(int argc, char const *argv[])
{

    cout << "Functions" << endl;
    int Num1, Num2;
    cout << "Enter number 1" << endl;
    cin >> Num1;
    cout << "Enter number 2" << endl;
    cin >> Num2;
    int sum = addNums(Num1, Num2);
    cout << sum;
    return 0;
}

// If we declare our function after the main method the main method isnt gonna know about the function so we declare it above the main method

int addNums(int Num1, int Num2)
{
    cout << "Sum is " ;
    return Num1 + Num2;
}
