#include <iostream>
using namespace std;
int nCr(int n, int r)
{
    // n!/r!(n-r)!

    // factorial of n
    int facN = 1;
    for (int i = n; i >= 1; i--)
    {
        facN = facN * i;
    }

    // factorial of r
    int facR = 1;
    for (int i = r; i >= 1; i--)
    {
        facR = facR * i;
    }

    int SubN_r = n - r;

    if (n - r < 0)
    {
        return 0;
    }

    // factorial of (n-r)!
    int facNminR = 1;
    for (int i = SubN_r; i >= 1; i--)
    {
        facNminR = facNminR * i;
    }
    int ans = facN / (facR * facNminR);
    return ans;
}
int main()
{
    int n, r;
    cin >> n >> r;

    cout << n << "C" << r << " = " << nCr(n, r) << endl;

    return 0;
}