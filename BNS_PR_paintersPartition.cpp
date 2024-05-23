#include <iostream>
using namespace std;
bool ispossible(int arr[], int n, int m, int mid)
{
    int boardSum = 0;
    int painters = 1;
    for (int i = 0; i < n; i++)
    {
        if (+arr[i] <= mid)
        {
            boardSum += arr[i];
        }
        else
        {
            painters++;
            if (painters > m || arr[i] > mid)
            {
                return false;
            }
            boardSum = arr[i];
        }
    }
    return true;
}
int midSearch(int arr[], int n, int m)
{
    int start = 0;
    int sum = 0;
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int end = sum;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (ispossible(arr, n, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{

    int boards[4] = {10, 20, 30, 40};
    int m = 2; // number of painters
    int n = 4; // size of array
    int ans = midSearch(boards, n, m);
    cout << "Answer: " << ans;
    return 0;
}