#include <iostream>
using namespace std;
int mergeArry(int arr[], int m)
{
    int noneZero = 0;
    int j = 0;
    while (j < m)
    {
        if (arr[j] != 0)
        {
            swap(arr[j], arr[noneZero]);
            noneZero++;
        }
        j++;
    }
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr1[6] = {2,7,0,0,3,9};
    mergeArry(arr1, 6);
    print(arr1,6);
    return 0;
}