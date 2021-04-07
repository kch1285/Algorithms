#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, idx = 0, num = 1;
    stack<int> s;
    cin >> n;
    vector<char> answer;
    vector<int> sequence(n);
    for(int i=0;i<n;i++) cin >> sequence[i];


    while(idx < n){
        if(num <= sequence[idx]){
            s.push(num++);
            answer.push_back('+');
        }
        else{
            if(s.top() == sequence[idx]){
                s.pop();
                answer.push_back('-');
                idx++;
            }
            else{
                cout << "NO" << '\n';
                return 0;
            }
        }
    }

    for(int i=0;i<answer.size();i++){
        cout << answer[i] << '\n';
    }
    return 0;
}