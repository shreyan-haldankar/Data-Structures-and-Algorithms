#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int T, A, B, C, D;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        cin >> A >> B >> C >> D;
        if (A == B)
            B += C;
        else if (B > A)
            A += C;
        else
            B += C;

        if (A == B)
            B += D;
        else if (B > A)
            A += D;
        else
            B += D;

        if (B>A)
            cout << "S" << endl;
        else 
            cout << "N" << endl;
    }
}