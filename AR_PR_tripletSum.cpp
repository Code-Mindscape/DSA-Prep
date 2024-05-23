#include <iostream>
using namespace std;
int tripletSum(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            for (int k = j + 1; k < size; k++)
            {
                if ((arr[i] + arr[j] + arr[k]) == target)
                {
                    cout <<arr[i];
                    cout << " " <<arr[j];
                    cout << " " <<arr[k]<<endl;
                }
            }
        }
    }
}
int main()
{

    int num[5] = {1,2,3,4,5};
    int target = 10;
    tripletSum(num, 5, target);

    return 0;
}