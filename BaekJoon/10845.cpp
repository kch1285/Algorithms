#include <iostream>
#include <queue>

using namespace std;

int main(){
    cin.tie(NULL);
    queue<int> q;
    int n, x;
    string order;

    cin >> n;
    for(int i=0;i<n;i++){
        cin >> order;
        if(order == "push"){
            cin >> x;
            q.push(x);
        }
        else if(order == "pop"){
            if(q.empty())   cout << "-1" << '\n';
            else{
                cout << q.front() << '\n';
                q.pop();
            }
        }
        else if(order == "size")    cout << q.size() << '\n';
        else if(order == "empty")   cout << q.empty() << '\n';
        else if(order == "front"){
            if(q.empty())   cout << "-1" << '\n';
            else    cout << q.front() << '\n';
        }
        else if(order == "back"){
            if(q.empty())   cout << "-1" << '\n';
            else    cout << q.back() << '\n';
        }
    }
    return 0;
}