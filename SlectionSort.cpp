#include <iostream>
using namespace std;
void sSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}
int main()
{
    int numbers[5] = {2, 45, 4, 25, 1};
    int n = 5;

    sSort(numbers, n);

    for (int i = 0; i < n; i++)
    {
        cout << numbers[i] << " ";
    }

    return 0;
}