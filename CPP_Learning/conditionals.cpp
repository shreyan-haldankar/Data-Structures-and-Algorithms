#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    
    bool isStudent = true;
    bool isSmart = false;
    if(isSmart && isStudent){
        cout << "You are a smart student";

    }
    else if(isStudent && !isSmart){
        cout << "Improvement required";
    }
    else {
        cout << "Who are you?" << endl;
    }

    if('a'> 'b'){
        cout << "String comparison was true";

    }

    string myString = "dog";
    if(myString.compare("dog")==0){
        cout << "It's a dog";
    }
    return 0;

}


