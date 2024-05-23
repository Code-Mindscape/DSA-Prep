#include <iostream>
#include <climits>
using namespace std;
int LargestrowWiseSum(int arr[][4], int row, int col)
{
    int maxi = INT_MIN;
    int rowIndex = -1;
    for (int i = 0; i < row; i++)
    {

        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        if (sum > maxi)
        {
            maxi = sum;
            rowIndex = row;
        }
    }
    cout << "Max Sum is: " << maxi << endl;
    return rowIndex;
}
int main()
{
    // 2d array
    int arr[3][4];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int ans = LargestrowWiseSum(arr, 3, 4);
    cout << "Row Index : " << ans;

    return 0;
}