#include <iostream>
#include <set>

using namespace std;

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, m, ans = 0;
    set<string> s;
    string input;
    cin >> n >> m;
    for(int i=0;i<n;i++){
        cin >> input;
        s.insert(input);
    }

    for(int i=0;i<m;i++){
        cin >> input;
        s.insert(input);
        if(s.size() == n)  ans++;
        else    s.erase(input);
    }

    cout << ans << '\n';
    return 0;
}