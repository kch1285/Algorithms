#include <iostream>
#include <queue>

using namespace std;

priority_queue<int> pq;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int t, k, n, ans;
    char dOri;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> k;
        for(int j=0;j<k;j++){
            cin >> dOri >> n;
            if(dOri == 'I') pq.push(n);
            else if(dOri == 'D'){
                if(n == 1)  pq.pop();
            }
        }
        if(pq.empty)    cout << "EMPTY" << '\n';
        else    cout << pq.top() << '\n';
    }
}