#include <bits/stdc++.h>
using namespace std;

int main()
{
    int mainTank = 1;
    int additionalTank =2;
    int mil = 10;
    int res=0;
    for (int i = 0; i < mainTank; ++i)
    {
        if (mainTank>=5)
        {
            mainTank = mainTank - 5;
            
            if(additionalTank!=0){
                mainTank=mainTank+1;
                additionalTank=additionalTank-1;
                res=res+1;
            }
            res=res+5;

        }
        else {
            if(additionalTank!=0 && additionalTank>=1){
                mainTank=mainTank+1;
                additionalTank=additionalTank-1;
                res=res+1;
            }
        } 
    }
    cout << res*10;
    return 0;
}