#include <iostream>
using namespace std;
void BubbleSort(int arr[], int n)
{
    bool swapped = false;

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            break;
        }
        
    }
}
int main()
{
    int numbers[5] = {2, 45, 4, 25, 1};
    int n = 5;

    BubbleSort(numbers, n);

    for (int i = 0; i < n; i++)
    {
        cout << numbers[i] << " ";
    }

    return 0;
}