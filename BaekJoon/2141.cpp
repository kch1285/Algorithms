#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, x, a, idx = 0;
    long long int sum = 0, check = 0;
    vector<pair<int, int> > city;

    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x >> a;
        city.push_back(make_pair(x, a));
        sum += a;
    }
    sort(city.begin(), city.end());

    if(sum % 2 == 0)    sum /= 2;
    else{
        sum /= 2;
        sum++;
    }

    while(check < sum){
        check += city[idx].second;
        idx++;
    }

    cout << city[idx - 1].first << '\n';
    return 0;
}