#include<iostream>
using namespace std;
int main(){

    int n = 5;
    int i = 1;
    int start = 5;
    int stars = 0;
    while (i<=n)
    {
        int j = 1;
        while (j<=n)
        {   
            cout<<j<<" ";
            if (j==5)
            {
                while (j>=1)
                {
                    cout<<j<<" ";
                    j--;
                }
                break;
            }
            j++;
            
        }
        
        i++;
        stars += 2;
        start--;
        cout<<endl;
    }
    

    return 0;
}