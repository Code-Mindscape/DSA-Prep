#include <iostream>
using namespace std;

int peakEl(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    while (start < end)
    {
        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else if(arr[mid] > arr[mid + 1])
        {
            end = mid;
        }
        mid = (start + end) / 2;
    }
    return start;
}

int main()
{
    int even[10] = {24, 69, 100, 99, 79, 78, 67, 36, 26, 19};
    int ans = peakEl(even, 10);
    cout << "peak Element at index: " << ans <<" Which is: "<< even[ans] << endl;

    return 0;
}
