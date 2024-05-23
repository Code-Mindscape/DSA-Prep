#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> D;

    D.push_back(2);
    D.push_back(3);
    D.push_front(1);

    cout << "front " << D.front() << endl;
    cout << "back " << D.back() << endl;

    cout << "Enpty or not " << D.empty() << endl;

    cout << " before erase: " << endl;
    for (int i : D)
    {
        cout << i << " ";
    }
    cout << endl;
    D.erase(D.begin(), D.begin() + 2);
    cout << " after erase: " << endl;
    for (int i : D)
    {
        cout << i << " ";
    }
    return 0;
}
