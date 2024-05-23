#include <iostream>
using namespace std;
void insertionSort(int arr[], int n)
{

    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0)
        {
            if (arr[j] > temp)
            {
                //Shift
                arr[j+1] = arr[j]; 
            }
            else{
                break;
            }
            j--;
        }
        arr[j+1] = temp;
    }
}
int main()
{
    int numbers[5] = {2, 45, 4, 25, 1};
    int n = 5;

    insertionSort(numbers, n);

    for (int i = 0; i < n; i++)
    {
        cout << numbers[i] << " ";
    }

    return 0;
}