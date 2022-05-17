#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int arr[2][3] = {{1,2,3},{5,7,8}};
    int rows,cols;
    rows = sizeof(arr)/sizeof(arr[0]);
    cols = sizeof(arr[0])/sizeof(arr[0][0]);

    // cout << rows << "\n" << cols;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << endl;
        }
        
    }
    
    
    return 0;
}
