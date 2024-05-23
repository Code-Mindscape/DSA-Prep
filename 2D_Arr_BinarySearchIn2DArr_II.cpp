#include <iostream>
#include <vector>
using namespace std;
bool BinarySearch(int arr[][3], int rows, int cols,int target)
{
    int rowIndex = 0;
    int colIndex = cols-1;

    while (rowIndex<rows && colIndex>=0)
    {
        int element = arr[rowIndex][colIndex]; // finding that element in matrix
        if (element == target)
        {
            return 1;
        }
        if (element > target)
        {
            rowIndex++;
        }
        else
        {
            colIndex--;
        }
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