#include <iostream>
using namespace std;
bool ispossible(int arr[], int n, int m, int mid)
{
    int pageSum = 0;
    int students = 1;
    for (int i = 0; i < n; i++)
    {
        if (pageSum + arr[i] <= mid)
        {
            pageSum += arr[i];
        }
        else
        {
            students++;
            if (students > m || arr[i] > mid)
            {
                return false;
            }
            pageSum = arr[i];
        }
    }
        return true;
}
int midSearch(int arr[], int n, int m)
{
    int start = 0;
    int sum = 0;
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int end = sum;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (ispossible(arr, n, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{

    int pages[4] = {5, 17, 100, 11};
    int m = 4; // number of students
    int n = 4; // size of array
    int ans = midSearch(pages,n,m); 
    cout<<"Answer: "<<ans;
    return 0;
}