#include <iostream>
#include <deque>

using namespace std;

deque <int> dq;

int main(){
    cin.tie(NULL);
    int n, x;
    string order;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> order;
        if(order == "push_front"){
            cin >> x;
            dq.push_front(x);
        }
        else if(order == "push_back"){
            cin >> x;
            dq.push_back(x);
        }
        else if(order == "pop_front"){
            if(dq.empty())  cout << "-1" << '\n';
            else{
                cout << dq.front() << '\n';
                dq.pop_front();
            }
        }
        else if(order == "pop_back"){
            if(dq.empty())  cout << "-1" << '\n';
            else{
                cout << dq.back() << '\n';
                dq.pop_back();
            }
        }
        else if(order == "size") cout << dq.size() << '\n';
        else if(order == "empty")   cout << dq.empty() << '\n';
        else if(order == "front"){
            if(dq.empty())  cout << "-1" << '\n';
            else    cout << dq.front() << '\n';
        }
        else if(order == "back"){
            if(dq.empty())  cout << "-1" << '\n';
            else    cout << dq.back() << '\n';
        }
    }
    return 0;
}