#include <iostream>
#include <climits>
using namespace std;
int MaxNum(int arr[], int size)
{
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int MinNum(int arr[], int size)
{
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}
int main()
{

    int number[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> number[i];
    }
    int maxNum = MaxNum(number, 10);
    int minNum = MinNum(number, 10);
    cout << "MaxNum: " << maxNum <<endl;
    cout << "MinNum: " << minNum <<endl;

    // int max = INT_MAX;
    // cout<<max;
    return 0;
}