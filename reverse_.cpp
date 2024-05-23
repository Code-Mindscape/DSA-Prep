#include <iostream>
#include <climits>
using namespace std;
int main()
{

    int num;
    cin >> num;
    int ans = 0;
    int range = 0;
    while (num!=0){
        int digit = num % 10;
        if ((ans > INT_MAX/10) || (ans < INT_MIN/10) )
        {
            range = 1;
            break;
        }
        
        ans = (ans * 10) + digit;
        num = num / 10;
    }
    if (range == 1){
        cout<<"Range exceeded!"<<endl;
    }
    else{
        cout<<ans<<endl;
    }
    


    return 0;
}