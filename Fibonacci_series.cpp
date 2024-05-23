#include <iostream>
using namespace std;
int main()
{

    // int n = 10;
    // int a = 0;
    // int b = 1;
    // int nextNum = 0;
    // cout << a << " " << b<<" ";
    // for (int i = 1; i <= n; i++)
    // {
    //     nextNum = a + b;
    //     cout << nextNum<< " ";
    //     a = b;
    //     b = nextNum;
    // }

    // for (int i = 0; i <= 15; i+=2)
    // {
    //         cout << i<<" ";
    //         if (i&1)
    //         {
    //             continue;
    //         }
    //         i++;
    // }

    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = i; j <= 5; j++)
    //     {
    //         cout<<i<<" "<<j<<endl;
    //     }
    
    // }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= 5; j++)
        {
            if (i + j == 10)
            {
                break;
            }
            cout << i << " " << j <<endl;
        }
    }

    return 0;
}















