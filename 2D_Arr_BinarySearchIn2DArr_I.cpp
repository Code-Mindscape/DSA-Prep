#include <iostream>
#include <vector>
using namespace std;
bool BinarySearch(int arr[][3], int rows, int cols,int target)
{
    int start = 0;
    int end = rows * cols - 1;
    int mid = start + (end - start)/2;
    while (start <= end)
    {
        int element = arr[mid/cols][mid%cols]; // finding that element in matrix
        if (element == target)
        {
            return 1;
        }
        if (element > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
        return 0;
    
}

int main()
{
    // 2d array
    int arr[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int ans = BinarySearch(arr, 3, 3, 8);
    cout<<ans;

    return 0;
}