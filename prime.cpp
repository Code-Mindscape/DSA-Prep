#include <iostream>
using namespace std;
int main()
{
    
    int n;
    cin >> n;
    int sign = 1;

    cout <<"2"; 
    
    for (int i = 2; i < n; i++)
    {
        sign = 1;
        if (i % 2 != 0)
        {
            for (int j = 1; j <= 9; j+=2)
            {
                if (i != j && i != 1 && j != 1)
                {
                    if (i % j == 0)
                    {
                        sign = 0;
                    }
                }
            }
            if (sign == 1){
                cout <<" "<< i;
            }
        }
    }

    return 0;
}