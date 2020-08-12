#include <iostream>
#include <queue>

using namespace std;

priority_queue <int> pq;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n, x, tmp;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x;
        if(x == 0){
            if(pq.empty())    cout << "0" << '\n';
            else{
                tmp = pq.top();
                cout << tmp << '\n';
                pq.pop();
            }
        }
        else    pq.push(x);
    }
    return 0;
}