#include <iostream>
#include <queue>

using namespace std ;

int main(){
    queue<int> q;
    q.push(4);
    q.push(5);
    q.push(6);
    cout<<q.front()<<endl;
    cout<<q.size()<<endl;
    cout<<sizeof(int)<<endl;
    q.pop();
    cout<<q.front()<<endl;
    cout<<q.empty()<<endl;


}