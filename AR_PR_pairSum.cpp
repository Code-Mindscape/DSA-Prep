#include <iostream>
using namespace std;
int pairSum(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if ((arr[i] + arr[j]) == target)
            {
                cout << " " << min(arr[i], arr[j]);
                cout << " " << max(arr[i], arr[j]) << endl;
            }
        }
    }
}
int main()
{

    int num[5] = {2, -3, 3, 3, -2};
    int target = 5;
    pairSum(num, 5, 0);
    // Sort () built in function will be used

    return 0;
}