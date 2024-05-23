#include <iostream>
#include <vector>
using namespace std;
vector<int> SpiralPrint(int arr[][4], int rows, int cols)
{
    vector<int> ans;
    int count = 0;
    int total = rows * cols;

    // Index initionalising
    int startingRow = 0;
    int startingCol = 0;
    int endingRow = rows-1;
    int endingCol = cols-1;

    while (count < total)
    {
        //print starting row
        for (int index = startingCol; count < total && index <= endingCol; index++)
        {
            ans.push_back(arr[startingRow][index]);
            count++;
        }
        startingRow++;

        //print ending col
        for (int index = startingRow; count < total && index <= endingRow; index++)
        {
            ans.push_back(arr[index][endingCol]);
            count++;
        }
        endingCol--;
        
        //print ending row
        for (int index = endingCol; count < total && index >= startingCol; index--)
        {
            ans.push_back(arr[endingRow][index]);
            count++;
        }
        endingRow--;

        //print starting col
        for (int index = endingRow; count < total && index >= startingRow; index--)
        {
            ans.push_back(arr[index][startingCol]);
            count++;
        }
        startingCol++;
        
    }
    return ans;

}

int main()
{
    // 2d array
    int arr[4][4];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    vector<int> ans = SpiralPrint(arr, 4, 4);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i]<< " ";
    }

    return 0;
}