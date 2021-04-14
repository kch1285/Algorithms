#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(pair<int, int> a, pair<int, int> b){
    return a.second < b.second;
}

int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    int n, x, zip = 0, idx = 0;
    vector<pair<int, int> > num;

    cin >> n;

    for(int i=0;i<n;i++){
        cin >> x;
        num.push_back(make_pair(x, i));
    }
    
    sort(num.begin(), num.end());

    for(int i=0;i<n;i++){
        while(num[i].first == num[idx].first){
            idx++;
        }
        for(int j=i;j<idx;j++){
            num[j].first = zip;
        }
        zip++;
        i = idx - 1;
    }
    
    sort(num.begin(), num.end(), comp);
    
    for(int i=0;i<n;i++){
        cout << num[i].first << ' ';
    }
    cout << '\n';
    return 0;
}