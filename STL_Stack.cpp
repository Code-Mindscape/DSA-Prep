#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<string> s;

    s.push("USMAN");
    s.push("ALI");
    s.push("FARAZ");

    cout<<"before pop At top: "<<s.top()<<endl;
    s.pop();
    cout<<"after pop At top: "<<s.top()<<endl;
    
    cout<<"Size of stack: "<<s.size()<<endl;
    cout<<"Empty or not: "<<s.empty()<<endl;
    


    

    return 0;
}
