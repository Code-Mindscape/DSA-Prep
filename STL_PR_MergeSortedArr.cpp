#include <iostream>
using namespace std;
int mergeArry(int arr1[], int m, int arr2[], int n, int arr3[])
{
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }
    while (i < m)
    {
        arr3[k++] = arr1[i++];
    }
    while (j < n)
    {
        arr3[k++] = arr2[j++];
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
    int arr1[8] = {1, 3, 5, 7, 9,11,13,15};
    int arr2[5] = {2, 4, 6,8,10};
    int s1 = sizeof(arr1)/sizeof(int);
    int s2 = sizeof(arr2)/sizeof(int);
    int s3 = s1+ s2;
    int arr3[s3] = {0};
    mergeArry(arr1, s1, arr2, s2, arr3);
    print(arr3,s3);
    return 0;
}