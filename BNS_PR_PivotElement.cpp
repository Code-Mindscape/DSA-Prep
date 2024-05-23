#include <iostream>
using namespace std;

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
        else if(arr[mid] <= arr[0])
        {
            end = mid;
        }
        mid = (start + end) / 2;
    }
    return start;
}

int main()
{
    int even[5] = {3,8,10,17,1};
    int ans = PivotEl(even, 5);
    cout << "Pivot Element at index: " << ans <<" Which is: "<< even[ans] << endl;

    return 0;
}
