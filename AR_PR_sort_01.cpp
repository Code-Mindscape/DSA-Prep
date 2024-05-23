#include <iostream>
using namespace std;
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << " " << arr[i];
    }
}
void Sort_01(int arr[], int size)
{
    int left = 0;
    int right = size - 1;
    while (left < right)
    {
        while (arr[left] == 0 && left < right)
        {
            left++;
        }
        while (arr[right] == 1 && left < right)
        {
            right--;
        }
        if (left < right)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}
int main()
{

    int num[8] = {1, 0, 1, 1,1, 1, 0, 0};
    Sort_01(num, 8);
    printArray(num, 8);

    return 0;
}