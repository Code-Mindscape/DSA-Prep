#include <iostream>
using namespace std;
int reverseArray(int arr[], int size)
{
    int i = 0;
    int hold;
    while (i < (size / 2))
    {
        hold = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = hold;
        i++;
    }
}
int main()
{

    int arr[6] = {3, 8, 10, 5, 6, 7};
    // int arr[5] = {8, 6, 14, 51, 62};

    int size = sizeof(arr) / sizeof(int);
    reverseArray(arr, size);
    for (int j = 0; j < size; j++)
    {
        cout << arr[j] << " ";
    }
    return 0;
}