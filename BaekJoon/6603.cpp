#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

vector <int> lotto;
bool visit[50];
int arr[14];
int k;

void dfs(int start){
    if(lotto.size() == 6){
        for(int i=0;i<lotto.size();i++){
            cout << lotto[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for(int i=start;i<k;i++){
        if(!visit[arr[i]]){
            visit[arr[i]] = true;
            lotto.push_back(arr[i]);
            dfs(i+1);
            visit[arr[i]] = false;
            lotto.pop_back();
        }
    }
}
int main(){
    cin >> k;
    while(k){
        for(int i=0;i<k;i++){
            cin >> arr[i];
        }
        dfs(0);
        cout << '\n';
        lotto.clear();
        memset(arr, 0, sizeof(arr));
        memset(visit, false, sizeof(visit));
        cin >> k;
    }
    return 0;
}