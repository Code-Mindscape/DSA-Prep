#include <iostream>
#include <queue>
using namespace std;
int main(){
    queue<string> q;

    q.push("USMAN");
    q.push("ALI");
    q.push("FARAZ");

    cout<<"Size of Queue: "<<q.size()<<endl;
    cout<<"before pop At front: "<<q.front()<<endl;
    q.pop();
    cout<<"after pop At front: "<<q.front()<<endl;
    
    cout<<"Size of Queue: "<<q.size()<<endl;
    cout<<"Empty or not: "<<q.empty()<<endl;
    


    

    return 0;
}
