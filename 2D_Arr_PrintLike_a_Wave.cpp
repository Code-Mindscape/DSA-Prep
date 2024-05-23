#include <iostream>
#include <vector>
using namespace std;
vector<int> PrintLikeWave(int arr[][3], int rows, int cols)
{
    vector<int> ans(9);
    for (int col = 0; col < cols; col++)
    {
        if (col & 1)
        {
            // Bottom to top
            for (int row = rows - 1; row >= 0; row--)
            {
                ans.push_back(arr[row][col]);
            }
        }
        else
        {
            // to to bottom
            for (int row = 0; row < rows; row++)
            {
                ans.push_back(arr[row][col]);
            }
        }
    }
    return ans;
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

    vector<int> ans = PrintLikeWave(arr, 3, 3);
    
    for (int i = 0; i < ans.size(); i++)
    {
        cout << " " << ans[i];
    }

    return 0;
}