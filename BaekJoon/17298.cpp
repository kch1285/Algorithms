#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    vector<int> num(n);
    vector<int> result(n);
    stack<int> s;
    stack<int> sIdx;

    for(int i=0;i<n;i++){
        cin >> num[i];
    }

    for(int i=0;i<n;i++){
        while((s.size() > 0) && (s.top() < num[i])){
            result[sIdx.top()] = num[i];
            s.pop();
            sIdx.pop();
        }
        s.push(num[i]);
        sIdx.push(i);
    }
    
    while(!sIdx.empty()){
        result[sIdx.top()] = -1;
        sIdx.pop();
    }

    for(int i=0;i<n;i++){
        cout << result[i] << ' ';
    }
    cout << '\n';
    return 0;
}