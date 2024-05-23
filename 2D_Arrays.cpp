#include<iostream>
using namespace std;
bool isfound(int arr[][4], int target, int row, int col){
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == target)
            {
                return 1;
            }
        }
        cout<<endl;
    }
    return 0;
}
int main(){
    //2d array
    int arr[3][4];
    // int arr[3][4] = {{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};

    // row wise input
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin>>arr[i][j];
        }
    }
    // column wise input
    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cin>>arr[j][i];
    //     }
    // }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int target;
    cout<<"Enter a number to find: ";
    cin>>target;

    if (isfound(arr,target,3,4))
    {
        cout<<"Present";
    }
    else{
        cout<<"Absent";
    }
    

    
    return 0;
} 