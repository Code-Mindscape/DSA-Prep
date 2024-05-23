#include <iostream>
using namespace std;
int main()
{
    int n;
    int i = 2;
    int j = 2;
    int sum = 0;
    int prime_status = 1;
    cin >> n;

    while (i < n)
    {
        prime_status = 1;
        j = 2;
        while (j < n)
        {
            if (i != j )
            {
                if (i % j == 0)
                {
                    prime_status = 0;
                }
            }

            j++;
        }
        if (prime_status == 1)
        {
            // cout<<i<<endl;
            sum = sum + i;
        }

        i++;
    }
    cout << "Sum is: " << sum + 1 << endl;
}
