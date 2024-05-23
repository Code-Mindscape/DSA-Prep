#include <iostream>
using namespace std;
int Search(int arr[], int s, int e, int target)
{
    int start = s;
    int end = e;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        if (target > mid)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int PivotEl(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    while (start < end)
    {
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else if (arr[mid] <= arr[0])
        {
            end = mid;
        }
        mid = (start + end) / 2;
    }
    return start;
}

int main()
{
    int even[5] = {3, 8, 10, 17, 1};
    int target = 0;
    int size = sizeof(even) / sizeof(int);
    int Pivot = PivotEl(even, 5);
    if (target >= Pivot && target <= size - 1)
    {
        int ans = Search(even, Pivot, size - 1, target);
        if (ans == -1)
        {
            cout << "Not Found.";
        }
        else
        {
            cout << target << " Found at index: " << ans << endl;
        }
    }
    else
    {
        int ans = Search(even, 0, Pivot - 1, target);
        if (ans == -1)
        {
            cout << "Not Found.";
        }
        else
        {
            cout << target << " Found at index: " << ans << endl;
        }
    }

    return 0;
}
