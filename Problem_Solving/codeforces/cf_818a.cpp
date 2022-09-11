#include <bits/stdc++.h>
using namespace std;

// long long gcd(long long int a, long long int b)
// {
//     if (b == 0)
//         return a;
//     return gcd(b, a % b);
// }


// long long lcm(int a, int b)
// {
//     return (a / gcd(a, b)) * b;
// }

int main()
{
    int T;
    cin >> T;

    while (T-- > 0)
    {
        int n;

        cin >> n;
        // int X;
        int con1, con2, con3, ans;
        // Main Condition:
        // X = lcm(a,b)/gcd(a,b) <= 3
        // X = lcm(a,b)/gcd(a,b)

        // Hence X can have 3 values
        // X = 1, 2, 3

        // For X = 1
        // Condition 1
        // X =  lcm(a,a)/gcd(a,a)
        // It will have n pairs
        // Eg n=6
        // Pairs = {1,1}{2,2}{3,3}{4,4}{5,5}{6,6}

        // hence 6 pairs for X to be 1
        // con1 = lcm(a,a)/gcd(a,a) = a/a = 1 (n pairs)
        con1 = n;



        // For X = 2
        // Condition 2
        // X = lcm(a,2a)/gcd(a,2a) = 2a/a
        // It will have n/2 pairs 
        // As highest possible value of a can be a = n/2 or 2a/2
        // But there can be 2 cases (a,2a) or vice versa ie (2a,a)

        // Eg n=6
        // Pairs = {1,2}{2,4}{3,6}{2,1}{4,2}{6,3}
        con2 = n/2*2;


        // For X = 3
        // Condition 3
        // X = lcm(a,3a)/gcd(a,3a) = 3a/a
        // It will have n/3 pairs 
        // As highest possible value of a can be a = n/3 or 3a/3
        // But there can be 2 cases (a,3a) or vice versa ie (3a,a)

        // Eg n=6
        // Pairs = {1,3}{3,6}{3,1}{6,3}
        con3 = n/3*2;


        // Total number of pairs:
        
        ans = con1 + con2 + con3;
        // Example:
        // for n = 6
        // ans = 6 + 6 + 4 = 16


        cout << ans << endl ;
    }
    return 0;
}