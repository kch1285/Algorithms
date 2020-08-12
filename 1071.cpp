#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

vector <int> arr;
vector <pair<int, int> > result;
int visit[1002];
int cnt = 0;

int main(){
    int n, tmp, last;
    cin >> n;
    arr.push_back(-2);
    result.push_back(make_pair(-2, 0));

    for(int i=1;i<=n;i++){
        cin >> tmp;
        arr.push_back(tmp);
        visit[tmp]++;
    }
    sort(arr.begin(), arr.end());

    tmp = 1;
    while(tmp < arr.size()){
        result.push_back(make_pair(arr[tmp], visit[arr[tmp]]));
        tmp += visit[arr[tmp]];
    }
    
    tmp = 1;
    last = result[0].first;
    while(result.size() > 3){
        if(last + 1 != result[tmp].first){
            cout << result[tmp].first << ' ';
            last = result[tmp].first;
            result[tmp].second--;
            if(result[tmp].second == 0)
                result.erase(result.begin()+tmp);
        }
        else{
            cout << result[tmp+1].first << ' ';
            last = result[tmp+1].first;
            result[tmp+1].second--;
            if(result[tmp+1].second == 0)
                result.erase(result.begin()+tmp+1);
        }
    }
    result.erase(result.begin());

    
    if(result.size() == 1){
        for(int i=0;i<result[0].second;i++){
            cout << result[0].first << ' ';
        }
    }
    else if(result[0].first + 1 == result[1].first){
        for(int i=0;i<result[1].second;i++){
            cout << result[1].first << ' ';
        }
        for(int i=0;i<result[0].second;i++){
            cout << result[0].first << ' ';
        }
    }
    else if(last + 1 == result[0].first){
        cout << result[1].first << ' ';
        result[1].second--;
        for(int i=0;i<result[0].second;i++){
            cout << result[0].first << ' ';
        }
        for(int i=0;i<result[1].second;i++){
            cout << result[1].first << ' ';
        }
    }
    else{
        for(int i=0;i<result[0].second;i++){
            cout << result[0].first << ' ';
        }
        for(int i=0;i<result[1].second;i++){
            cout << result[1].first << ' ';
        }
    }
    return 0;
}