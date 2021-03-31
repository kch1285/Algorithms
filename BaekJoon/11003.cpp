#include <iostream>
#include <vector>
#include <deque>

using namespace std;

vector <int> arr;
deque <int> dq;
int tmp[5000001];

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n, l;
    cin >> n >> l;
    for(int i=1;i<=n;i++){
        cin >> tmp[i];

        if(dq.empty())  dq.push_back(tmp[i]);
        else{
            while(!dq.empty() && dq.back() > tmp[i])    dq.pop_back();
            dq.push_back(tmp[i]);
        }

        if(i>l){
            if(dq.front() == tmp[i-l])  dq.pop_front();
        }
        arr.push_back(dq.front());
        cout << arr[i-1] << " ";
    }
    cout << '\n';
    return 0;
}