#include <iostream>
using namespace std;
int Fibonacci(int n)
{

    int a = 0;
    int b = 1;

    int sum = 0;
    int i = 0;

    if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }

    while (i != n - 2)
    {

        sum = a + b;
        a = b;
        b = sum;
        i++;
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
    cout << n << "th term: " << Fibonacci(n) << endl;

    return 0;
}