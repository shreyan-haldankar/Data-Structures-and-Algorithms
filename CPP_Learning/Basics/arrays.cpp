#include <bits/stdc++.h>

using namespace std;
int main(int argc, char const *argv[])
{
    int arr[] = {10,20,30,40,50,60};
    int len;

    arr[3] = 90;
    cout << arr[3] << endl;

    len = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << endl;
    }
    
    return 0;
}
