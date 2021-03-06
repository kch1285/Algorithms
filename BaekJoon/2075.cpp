#include <iostream>
#include <queue>
using namespace std;

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n, input, cnt = 0;
    priority_queue<int, vector<int>, greater<int> > pq;

    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> input;
            pq.push(input);
            if(pq.size() > n)   pq.pop();
        }
    }
    cout << pq.top() << '\n';
    return 0;
}