#include <iostream>
#include <queue>

using namespace std;


bool visit[100001];

int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    int n, k;

    cin >> n >> k;

    queue<pair<int, int> > q;
    q.push(make_pair(n, 0));

    while(!q.empty()){
        int pos = q.front().first;
        int cost = q.front().second;
        q.pop();

        if(pos == k){
            cout << cost << '\n';
            return 0;
        }

        if(0 <= pos - 1 && !visit[pos - 1]){
            q.push(make_pair(pos - 1, cost + 1));
            visit[pos - 1] = true;
        }

        if(pos + 1 <= k && !visit[pos + 1]){
            q.push(make_pair(pos + 1, cost + 1));
            visit[pos + 1] = true;
        }

        if(pos * 2 <= k + 1 && !visit[pos * 2]){
            q.push(make_pair(pos * 2, cost + 1));
            visit[pos - 1] = true;
        }
    }
}