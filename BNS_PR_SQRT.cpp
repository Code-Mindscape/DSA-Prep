#include <iostream>
using namespace std;

long long int mySqrt(int n)
{
    int start = 0;
    int end = n;
    long long int mid = start + (end - start) / 2;

    long long int ans = -1;
    while (start <= end)
    {
        long long int square = mid * mid;
        if (square == n)
        {
            return mid;
        }
        if(square < n)
        {
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
double morePrecision(int n, int precision, int integerPart){
    double factor = 1;
    double ans = integerPart;
    for (int i = 0; i < precision; i++)
    {
        factor = factor/10;
        for (double j = ans; j*j < n; j = j+factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int n = 101;
    int integerPart = mySqrt(n);
    cout << "Answer: " << morePrecision(n, 3, integerPart)<< endl;

    return 0;
}
