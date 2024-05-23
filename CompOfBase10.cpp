#include <iostream>
using namespace std;
int main()
{

    int start = 1;
    int ans = 0;
    int num;
    cin >> num;

    // Edge case
    if (num == 0)
    {
        start = 0;
        cout << 1;
    }

    int m = num;
    int mask = 0;

    while (m != 0 & start == 1)
    {
        mask = (mask << 1) | 1;
        m = m >> 1;
    }
    ans = (~num) & mask;
    if (start == 1)
    {
        cout << ans << endl;
    }

    return 0;
}