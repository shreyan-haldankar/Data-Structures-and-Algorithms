#include <bits/stdc++.h>
using namespace std;

double division(int a, int b)
{
    if (b==0){
        throw "Division by zero error!";
    }
    return a/b;
}

int main(int argc, char const *argv[])
{
    try
    {
        double div;
        div = division(10, 0);
        cout << div;
    }
    catch(const char* msg)
    {
        cerr << msg << endl;
    }
    
    return 0;
}
