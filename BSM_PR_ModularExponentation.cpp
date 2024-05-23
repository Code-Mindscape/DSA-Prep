#include <iostream>
using namespace std;
int ModluarExpo(int x, int n, int m)
{
    int res = 1;
    while (n > 0)
    {
        if (n & 1)
        {
            res = (1LL * (res) * (x) % m) % m;
        }
        x = (1LL * (x) % m * (x) % m) % m;
        n = n >> 1;
    }
    return res;
}
int main()
{
    int a, b, n;
    cin >> a >> b;
    int ans = ModluarExpo(n, a, b);
    cout << "Ans: " << ans;

    return 0;
}