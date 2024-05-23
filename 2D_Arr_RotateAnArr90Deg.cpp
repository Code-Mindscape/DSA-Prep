#include <iostream>
using namespace std;
void rotateArray(int arr[][4], int rows, int cols)
{
    int temp[rows][cols];

    int newR = 0;
    int newC = cols - 1;

    for (int i = 0; i < rows; i++)
    {
        int j = 0;
        for (j = 0; j < cols; j++)
        {
            temp[j][newC] = arr[i][j];
        }
        newC--;
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout<<temp[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{

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
    rotateArray(arr, 4, 4);
    return 0;
}